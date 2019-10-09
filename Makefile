all: calculator.o
	clang++ calculator.o client.cpp -o calc
	clear
	./calc

calculator.o: calculator.cpp
	clang++ calculator.cpp -c 

clean:
	rm -rf calculator.o calc