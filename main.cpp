/**
 * @file main.cpp
 * @brief Main function demonstrating the different features of the project Myclass usage
 */

#include "fac.h"
#include "fib.h"
#include "pal.h"
#include "prm.h"
#include "example_class.h"
#include <iostream>

int main() {
	std::cout << "Factoriel de 6 : " << fac(6) << std::endl;
	std::cout << "5eme terme de la suite de fibonacci: " << fib(5) << std::endl;
	std::cout << "sananas est il un palindrome : " << pal("sananas") << std::endl;
	std::cout << "13 est il un nombre entier : " << prm(13) << std::endl;
	MyClass obj(10);
	std::cout << "Value: " << obj.getValue() << std::endl;
	obj.setValue(20);
	std::cout << "Value: " << obj.getValue() << std::endl;
	
	return 0;
}
