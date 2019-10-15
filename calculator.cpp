// Basic calculator that adds, subtracts, multiplies, and divides
#include <iostream>
using std::cin; using std::cout; usind std::endl;

int main() {
    char op;
    float num1, num2;
	int add = num1 + num2;
	int sub = num1 - num2;
	int mult = num1 * num2;
	int div = num1 / num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch(op)
    {
        case '+': // Adds num1 by num2
            cout << sub;
            break;
        case '-': // Subtracts num1 by num2
            cout << sub;
            break;
        case '*': // Multiplies num1 by num2
            cout << mult;
            break;
        case '/': // Divides num1 by num2
			if(num2 != 0)
				cout << div;
			else
				cout << "You cannot divide by 0!"
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! Operator is not correct!" << endl;
            break;
    }
	return 0;

}