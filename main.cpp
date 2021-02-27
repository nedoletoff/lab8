#include "a.hpp"
#include <stdlib.h>

int main()
{
	int n = 0, gap = 0;
	double* arr = NULL;
	n = type_int(0);
	arr = (double*) calloc(n, sizeof(double));
	pull_arr(arr, n);
	gap = type_int(1);
	get_index(arr, n, gap);
	return 0;
}
