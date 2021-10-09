all: highestNumber binary power triangle tenOddNumbers sphere prime infinitSum sum numbers
	
binary:
	@echo "Compiling program";
	@g++ BinaryToDecimal.c -o binaries/BinaryToDecimal.exe
highestNumber:
	@echo "Compiling program";
	@g++ ThreeHighNumbers.c -o binaries/ThreeHighNumbers.exe
power: 
	@echo "Compiling program";
	@g++ Power.c -o binaries/PowerProgram.exe
triangle:
	@echo "Compiling program";
	@g++ TriangleArea.c -o binaries/TriangleArea.exe
tenOddNumbers:
	@echo "Compiling program";
	@g++ TwentyOddNumbers.c -o binaries/TwentyOddNumbers.exe
sphere:
	@echo "Compiling program";
	@g++ RadiusSphere.c -o binaries/RadiusSphere.exe
prime:
	@echo "Compiling program";
	@g++ PrimeNumber.c -o binaries/PrimeNumber.exe
infinitSum:
	@echo "Compiling program";
	@g++ UserSum.c -o binaries/UserSum.exe
sum: 
	@echo "Compiling program";
	@g++ SumPairNumbers.c -o binaries/SumPairNumbers.exe
numbers:
	@echo "Compiling program";
	@g++ TenNumbers.c -o binaries/TenNumbers.exe
