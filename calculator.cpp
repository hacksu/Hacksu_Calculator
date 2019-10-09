#include "calculator.hpp"

double Calculator::add(double x, double y){
    history.push_back(std::pair<std::string, double>((std::to_string(x) + " + " + std::to_string(y)), x+y));
    return x + y;
}

double Calculator::subtract(double x, double y){
    history.push_back(std::pair<std::string, double>((std::to_string(x) + " - " + std::to_string(y)), x-y));
    return x - y;
}

double Calculator::multiply(double x, double y){
    history.push_back(std::pair<std::string, double>((std::to_string(x) + " * " + std::to_string(y)), x*y));
    return x * y;
}

double Calculator::divide(double x, double y){
    history.push_back(std::pair<std::string, double>((std::to_string(x) + " / " + std::to_string(y)), x/y));
    return x / y;
}

double Calculator::modulo(int x, int y){
    history.push_back(std::pair<std::string, double>((std::to_string(x) + " % " + std::to_string(y)), x%y));
    return x % y;
}

double Calculator::calculate(std::string equation){
    std::stringstream first_num;
    std::stringstream second_num;
    char op;
    bool found_op = false;
    double answer;

    for(char cur : equation){
        if(cur == '+' || cur == '-' || cur == '*' || cur == '/' || cur == '%'){
            op = cur;
            found_op = true;
            continue;
        }else if(!found_op && cur != ' ' && cur != '\n'){
            first_num << cur;
        }else if(found_op && cur != ' ' && cur != '\n'){
            second_num << cur;
        }
    }

    double x, y;
    first_num >> x;
    second_num >> y;

    switch(op){
        case '+':
        {
            answer = add(x, y);
            break;
        }
        default:
        {
            answer = 0;
            break;
        }
    }

    return answer;
}

std::string Calculator::get_equation(){
    print_menu();
    std::cout << "Enter equation: ";
    std::string result;
    std::getline(std::cin, result);
    return result;
}

void Calculator::print_menu(){
    std::cout << "Calculator Menu:\n";
    std::cout << "\tAdd +\n";
    std::cout << "\tSubtract -\n";
    std::cout << "\tMultiply *\n";
    std::cout << "\tDivide \\ \n";
    std::cout << "\tModulo %\n";
}

void Calculator::print_history(){
    int i = 1;
    for(const std::pair<std::string, double>& hist_ele: history){
        std::cout << "History " << i << ": " << hist_ele.first << " = " << hist_ele.second << '\n';
    }
}