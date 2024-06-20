#include "fac.h"
#include <cassert>

int main() {
	assert(fac(1) == 1);
	assert(fac(5) == 120);
	try {
		fac(-5);
	} catch (const std::invalid_argument &e) {
		assert(true);
	}
	return 0;
}
