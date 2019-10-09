#include "calculator.hpp"

int main() {

    Calculator calc;

    std::string equ;
    do{
        equ = calc.get_equation();
        if(equ == "exit" || equ == "Exit" || equ == "EXIT"){
            break;
        }
        std::cout << equ << " = ";
        std::cout << calc.calculate(equ) << '\n';
    }while(true);

    std::cout << "Thank you for using Calculator\n";

	return 0;
}