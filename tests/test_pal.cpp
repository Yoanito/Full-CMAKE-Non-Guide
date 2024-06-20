#include "pal.h"
#include <cassert>

int main() {
	assert(pal("sananas") == true);
	assert(pal("bbbbb") == true);
	asser(pal("adffghy")== false);
	return 0;
}
