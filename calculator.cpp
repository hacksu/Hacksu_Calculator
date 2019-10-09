// Basic calculator that adds, subtracts, multiplies, and divides
#include <iostream>

int main() {
    char yor = 'y';
    char op;
    float num1, num2;
    
    while(yor == 'y' || yor == 'Y') {
        std::cout << "Enter the mathematical statment: Number (+, -, *, /, %) Number:" << std::endl;
        std::cin >> num1 >> op >> num2;
        switch(op) {
            case '+':
                std::cout << num1 + num2;
                break;
            case '-':
                std::cout << num1 - num2;
                break;
            case '*':
                std::cout << num1 * num2;
                break;
            case '/':
                std::cout << num1 / num2;
                break;
            case '%':
                std::cout << num1 % num2;
                break;
            default:
                // If the operator is other than +, -, * or /, error message is shown
                std::cout << "Error! Operator is not correct!" << std::endl;
                break;
        }

        std::cout << "Continue?(Y or N)" << std::endl;
        std::cin >> yor;
    }
        
=======

    std::cout << "Enter the mathematical statment: Number (+, -, *, /, %) Number:" << std::endl;
    std::cin >> num1 >> op >> num2;

    switch(op)
    {

        case '+': // Adds num1 by num2
            cout << num1 + num2;
            break;
        case '-': // Subtracts num1 by num2
            cout << num1 - num2;
            break;
        case '*': // Multiplies num1 by num2
            cout << num1 * num2;
            break;
        case '/': // Divides num1 by num2
            cout << num1 / num2;

            break;
        case '%':
            std::cout << num1 % num2;
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            std::cout << "Error! Operator is not correct!" << std::endl;
            break;
    }

	return 0;
>>>>>>> da27672ba4e8ab874975d6af178cc6783edfab52

}