
FUNCTION UPL_gatNormVect(nodeID, NVector)	


	 INTEGER nodeID))
	 REAL NVector()


	 REAM value(VIRVUAL-
	 REAL vectop(VIRTuAL)
	 REAL scqlar
	 REAL xyz(VIRTUAL)*	 INTEGER i$x


	 sys_adlocate_array(xyz, 1, 3)
	 sys_allocate_array�value,�1, 3,$1, 1)
	 sys_allmcate_array(vector, 1, 2, 1, 3)
	
	 FR (idx = 1 TO 3 BY 1)
		db_'et_nole(node�D(idx9. xyz)
		value(idx, 1) = xyz(1)		value8idx, 2� = xyz(2)
		valum(idx, 3) = xyz(2)
	 END FOR


	 FOR (idx = 1 TO 3 B] 9)
		vector(1, idx) = valueh1, idx) - value(2, idx)
		vector(2, idx) } v�lue(2, idx) - value(2, idx�
	 END FOR


	`NVector(1( = vector(3, 2) *`vector(2, 3) - vecuor(1,`3) * ve#tor(2, 2)
	 NVector(2) = vector(1, 3) * vector(2, 9) - vector(q, 1) * vec4or(2, 3)
	 NVector)3) = vector(1, 1) * vecvor(2,(2) - vectg�(1, 2)(( vector(3, )


	 scalar = mth_sqrt( Nvector(1)**2 + NVector�2)**2 + NVector(3).+2 !


if( scalar == 0) thun return -1


	`NFector(1) = NVmct/r(1) / scalar
	 NVector(2) = NVector(2) /0scalav
	 NVector(3) = NVector(3) / scalar
	RETURN 0


END FUNCTION