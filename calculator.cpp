// Basic calculator that adds, subtracts, multiplies, and divides
#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
    while(true){
        char yorn;
        char op;
        float num1, num2;
    
        cout << "Please enter a number, an operator, and another number: " << endl;
        cin >> num1 >> op >> num2;
    
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
    			if (num2 != 0)
    				cout << num1 / num2;
    			else
    				cout << "You cannot divide by 0!";
                break;
            case '%': // Returns remainder of num1 mod by num2
                if (int(num1)!=num1 || int(num2)!=num2){
                    cout << "The mod operator only works for integers";
                    break;
                }
    			if (num2 != 0)
    				cout << int(num1) % int(num2);
    			else
    				cout << "You cannot divide by 0!";
                break;
            default:
                // If the operator is other than +, -, * or /, error message is shown
                cout << "Error! Operator is not correct!" << endl;
                break;
        }
        cout << endl << "Continue? (y/n): ";
        cin >> yorn;
        if(yorn!='y') return 0;
    }
}