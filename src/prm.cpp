/**
 * @file prm.cpp
 * @brief Implementation of Prime function
 */

#include "prm.h"
#include <cmath>

bool prm(int a) {
        if(a <= 1) {
		return false;
	}

	for(int i = 2; i <= std::sqrt(a); i++) {
		if (n % i == 0){
			return false;
		}
	}

	return true;
}
