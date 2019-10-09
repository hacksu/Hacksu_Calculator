#ifndef HACKSU_CALCULATOR
#define HACKSU_CALCULATOR

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <sstream>

class Calculator{
public:
	Calculator(){}

	double add(double, double);
	double subtract(double, double);
	double multiply(double, double);
	double divide(double, double);
	double modulo(int, int);

	std::string get_equation();
	double calculate(std::string);
	void print_menu();
	void print_history();

private:
	std::vector<std::pair<std::string, double>> history;

};

#endif