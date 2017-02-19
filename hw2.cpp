//
//	Bryant Clouse
//	Grid-World
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <assert.h>
#include <random>
#include <iomanip>
#include <cmath>
#include "Classes.h"

using namespace std;

int main() {
	int n = 5, m = 5;
	GridWorld grid (n,m,1,2);
	grid.display(0);
	return 0;
}