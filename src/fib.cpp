/**
 * @file fib.cpp
 * @brief Implementation of fibonacci function
 */

#include "fib.h"

int fib(int a) {
	int nextTerm = 0, t1 = 0, t2 =1; 
 
        if(a <= 0) {
                throw std::invalid_argument("Pas d'index negatif ou nul");
        }
        if(a == 1 ){
                return 0;
        }else if(a == 2) {
		return 1;
	}
        do
	for(int i = 2; i <= a; i++){
		nextTerm = t1 + t2;
		t1 = t2; 
		t2 = nextTerm;
	}
	return t2;
}
