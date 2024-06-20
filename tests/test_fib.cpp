#include "fib.h"
#include <cassert>

int main() {
	assert(fib(1) == 0);
	assert(fib(8) == 13);
	try {
		fib(-5);
	} catch (const std::invalid_argument &e) {
		assert(true);
	}
	return 0;
}
