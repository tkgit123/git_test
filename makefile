SRC_CALC = src/main.c
SRC_UNITY = unity/src/unity.c

Q = @
calculator: $(SRC_CALC)
	@echo Building program!
	$(Q) gcc -o $@ $^
	@echo Building done!

clean :
	$(Q) del -f *.o *.exe
	@echo Done cleaning!
