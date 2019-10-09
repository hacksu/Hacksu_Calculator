all: calculator.o
	clang++ calculator.o client.cpp -o calc

calculator.o: calculator.cpp
	clang++ calculator.cpp -c 

clean:
	rm -rf calculator.o calc