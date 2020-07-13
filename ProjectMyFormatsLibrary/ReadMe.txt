This project explains how to create and comsume a c++ static library

1. Create respective folders for src, lib, bin, include and obj files
2. Add required code to these files
3. Open a terminal and generate object files for the respective implementation files
	E.G. $ g++ -c MyLib_PrintUtility.cpp
4. Now let's build a new library using 'ar'
	E.G. $ ar crv MyLib.a MyLib_PrintUtility.o MyLib_MathUtility.o
5. This would create a library using required object files
6. Now generate the binary / executable
	E.G. $ g++ -o LibRunner LibRunner.o MyLib.a -lm
7. Run the binary !
8. Your lib is also ready to be distributed
9. This would be required at the time of compilation of binary
