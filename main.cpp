#include "a.hpp"
#include <stdlib.h>

int main()
{
	int n = 0;
	double* arr = NULL;
	double* abs_arr = NULL;
	n = type_int();
	arr = (double*) calloc(n, sizeof(double));
	abs_arr = (double*) calloc(n, sizeof(double));
	pull_arr(arr, n);
	update_abs_arr(abs_arr, arr, n);
	print_arr(abs_arr, arr, n);
	return 0;
}
