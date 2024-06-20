/**
 * @file pal.cpp
 * @brief Implementation of Palindrome function
 */

#include "pal.h"
#include "algorithm"
#include <cctype>



bool pal(std::string s) {
        int leftIndex = 0;
	int rightIndex = s.length() - 1;

	while(leftIndex < rightIndex) {

		if(std::tolower(s[leftIndex]) != std::tolower(s[rightIndex])) {
			return false;
		}
		leftIndex++;
		rightIndex--;
	}

	return true;
}
