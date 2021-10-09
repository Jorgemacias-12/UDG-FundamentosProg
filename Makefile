all: makedir highestNumber binary power triangle tenOddNumbers sphere prime infinitSum sum numbers 
	
makedir: 
	@mkdir -p dist

binary:
	@echo "Compiling program";
	@g++ BinaryToDecimal.c -o dist/BinaryToDecimal.exe
highestNumber:
	@echo "Compiling program";
	@g++ ThreeHighNumbers.c -o dist/ThreeHighNumbers.exe
power: 
	@echo "Compiling program";
	@g++ Power.c -o dist/PowerProgram.exe
triangle:
	@echo "Compiling program";
	@g++ TriangleArea.c -o dist/TriangleArea.exe
tenOddNumbers:
	@echo "Compiling program";
	@g++ TwentyOddNumbers.c -o dist/TwentyOddNumbers.exe
sphere:
	@echo "Compiling program";
	@g++ RadiusSphere.c -o dist/RadiusSphere.exe
prime:
	@echo "Compiling program";
	@g++ PrimeNumber.c -o dist/PrimeNumber.exe
infinitSum:
	@echo "Compiling program";
	@g++ UserSum.c -o dist/UserSum.exe
sum: 
	@echo "Compiling program";
	@g++ SumPairNumbers.c -o dist/SumPairNumbers.exe
numbers:
	@echo "Compiling program";
	@g++ TenNumbers.c -o dist/TenNumbers.exe
