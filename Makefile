all: makedir highestNumber binary power triangle tenOddNumbers sphere prime infinitSum sum numbers factorial orderNumbers posprime vector month order week schedule countVoCo countString
	
makedir: 
	@mkdir -p dist

binary:
	@echo "Compiling program";
	@g++ Part-1/BinaryToDecimal.c -o dist/BinaryToDecimal.exe
highestNumber:
	@echo "Compiling program";
	@g++ Part-1/ThreeHighNumbers.c -o dist/ThreeHighNumbers.exe
power: 
	@echo "Compiling program";
	@g++ Part-1/Power.c -o dist/PowerProgram.exe
triangle:
	@echo "Compiling program";
	@g++ Part-1/TriangleArea.c -o dist/TriangleArea.exe
tenOddNumbers:
	@echo "Compiling program";
	@g++ Part-1/TwentyOddNumbers.c -o dist/TwentyOddNumbers.exe
sphere:
	@echo "Compiling program";
	@g++ Part-1/RadiusSphere.c -o dist/RadiusSphere.exe
prime:
	@echo "Compiling program";
	@g++ Part-1/PrimeNumber.c -o dist/PrimeNumber.exe
infinitSum:
	@echo "Compiling program";
	@g++ Part-1/UserSum.c -o dist/UserSum.exe
sum: 
	@echo "Compiling program";
	@g++ Part-1/SumPairNumbers.c -o dist/SumPairNumbers.exe
numbers:
	@echo "Compiling program";
	@g++ Part-1/TenNumbers.c -o dist/TenNumbers.exe
factorial:
	@echo "Compiling program";
	@g++ Part-2/Factorial.c -o dist/Factorial.exe
orderNumbers:
	@echo "Compiling program";
	@g++ Part-2/Order10Numbers.c -o dist/Order10Numbers.exe
posprime:
	@echo "Compiling program";
	@g++ Part-2/PrimePositive.c -o dist/PrimePositive.exe
vector:
	@echo "Compiling program";
	@g++ Part-2/VectorMax.c -o dist/VectorMax.exe
month:
	@echo "Compiling program";
	@g++ Part-2/MonthGain.c -o dist/MonthGain.exe
order:
	@echo "Compiling program";
	@g++ Part-2/Order10Numbers.c -o dist/Order10Numbers.exe
week:
	@echo "Compiling program";
	@g++ Part-2/WeekGain.c -o dist/WeekGain.exe
schedule:
	@echo "Compiling program";
	@g++ Part-2/Schedule.c -o dist/Schedule.exe
countVoCo:
	@echo "Compiling program";
	@g++ Part-2/CountVoCo.c -o dist/CountVoCo.exe
countString:
	@echo "Compiling program";
	@g++ Part-2/CountString.c -o dist/CountString.exe