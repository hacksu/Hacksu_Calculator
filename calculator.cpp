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

    std::cout << "WOOHOO! The calculations have been calculated!" << std::endl;
    return 0;
}