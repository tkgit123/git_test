SRC_CALC = src/main.c
SRC_UNITY = unity/src/unity.c

Q = @
calculator.exe: $(SRC_CALC)
	@echo Building program!
	$(Q) gcc $(SRC_CALC) -o calculator
	@echo Building done!

clean :
	$(Q) del -f *.o *.exe
	@echo Done cleaning!
