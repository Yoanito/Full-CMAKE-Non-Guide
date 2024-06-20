#include "prm.h"
#include <cassert>

int main() {
	assert(prm(13) == true);
	assert(prm(1) == false);
	asser(prm(140)== false);
	return 0;
}
