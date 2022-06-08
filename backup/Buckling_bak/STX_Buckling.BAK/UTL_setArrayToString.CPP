

/* $Header: /banff/vbs/Dev.X700/cCase/d1/src_1/./lp/include/RCS/lpenums.p,v 1.1 91/05/21 15:58:43 deiner Exp $ */
/* Evaluation methods for LpEval */

/* SublistType filters for LpSublistType */




/* note:
 * if the mask order is disturbed, the customer
 *  must recompile any custom pcl to plb.
 *  conclusion: add new mask bits to the end.
 * these constants are used by fortran and
 *  may only be expressed as decimal numbers.
 */




/* Attribute names for LpSublistAttributeGet */

/* Data formats for LpCOERCE */

/* FORTRAN interface help */



/* $Header: /banff/vbs/Dev.X700/cCase/d1/src_1/./lp/include/RCS/lpkeywords.p,v 1.1 91/05/14 15:38:07 deiner Exp $ */


/* TAS or primitive geometry types */
/* End TAS or primitive geometry types */

/* TAS or primitive geometry types */
/* End TAS or primitive geometry types */













/* TAS or simple geometry types. */











FUNCTION UTL_setArrayToString(array, cnt, VirtualStr)
	 INTEGER array()
	 INTEGER cnt
	 STRING VirtualStr[]
	 INTEGER status, idx
	 INTEGER pklist(VIRTUAL)


	 status = sys_allocate_array(pklist, 1, cnt, 1, 6)


	 FOR (idx = 1 TO cnt BY 1)
		pklist(idx, 1) = 	 4
		pklist(idx, 2) = 	2
		pklist(idx, 3) = array(idx)
		pklist(idx, 4) = 0
		pklist(idx, 5) = 0
		pklist(idx, 6) = 0
	 END FOR
	
	 status = lp_picklist_string_creator_v(pklist(1:, 1:), cnt, 0, VirtualStr)
	 sys_free_array(pklist)


RETURN 0
END FUNCTION