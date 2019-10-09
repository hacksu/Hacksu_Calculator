#include "calculator.hpp"

int main() {

    Calculator calc;

    std::cout << calc.calculate(calc.get_equation()) << '\n';

	return 0;

}