// Basic calculator that adds, subtracts, multiplies, and divides
#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
    char yor = 'y';
    char op;
    float num1, num2, sub;
    cout<<"Enter your first number: ";
    cin>>num1; //Input first number
    cout<<"Enter your second number: ";
    cin>>num2; //Input Second number
    fflush(stdin); // flushing the previous "Enter" key
    cout<<"Enter operator: ";
    op=getchar(); // input a character as operator

    switch(op)
    {
        case '+': // Adds num1 by num2
            sub = num1 + num2;
            cout <<"Addition Result of "<<num1<<" and "<<num2<<" is: "<<sub; //Display the result of addition
            break;
        case '-': // Subtracts num1 by num2
            sub = num1 - num2;
            cout <<"Subtraction Result of "<<num2<<" from "<<num1<<" is: "<<sub; //Display the result of subtraction
            break;
        case '*': // Multiplies num1 by num2
            sub = num1 * num2;
            cout <<"Product of "<<num1<<" and "<<num2<<" is: "<<sub; //Display the result of Multiplication
            break;
        case '/': // Divides num1 by num2
			if (num2 != 0){
				sub = num1 / num2;
                cout <<"Division Result of "<<num1<<" by "<<num2<<" is: "<<sub; //Display the result of Division
                break;
            }
			else
				cout << "You cannot divide by 0!"; //Exception handling divide by zero
            break;
        case '%': // Returns remainder of num1 divided by num2
			if (num2 != 0)
				cout << (int)num1 % (int)num2;  //Typecasting to integer to get remainder
			else
				cout << "You cannot divide by 0!"; //Handling divide by zero exception
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! Operator is not correct!" << endl;
            break;
    }

	return 0;


}