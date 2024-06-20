/**
 * @file fac.cpp
 * @brief Implementation of factorial function
 */

#include "fac.h"

int fac(int a) {
	if(a < 0) {
		throw std::invalid_argument("Pas de factorielle négatif");
	}
	if(a == 0 || a == 1){
		return 1;
	}
	return a * fac(a - 1);
}
