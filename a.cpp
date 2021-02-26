#include "a.hpp"
#include <stdio.h>
#include <stdlib.h>
#define N 5

int type_int()
{
	int n = 0;
	while(n < N)
	{
		printf("Number should be greater then %d\n", N); 
		printf("Type int number: ");
		while (scanf("%d", &n) != 1 || getchar() != '\n') 
		{
			printf("Error, try again\n");
			while (getchar() != '\n');
		}
	}
	return n;
}

double type_double()
{
	double n = 0;
	printf("Type number: ");
	while (scanf("%lf", &n) != 1 || getchar() != '\n')
	{
		printf("Error, try again\n");
		while (getchar() != '\n');
	}
	return n;
}

void pull_arr(double* arr, int size)
{
	for (int i = 0; i < size; ++i)
		arr[i] = type_double();
}

void update_abs_arr(double* abs_arr, double* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < N; ++j)
			abs_arr[i] += arr[(i+j) % size];
		abs_arr[i] /= N;
	}
}

void print_arr(double* abs_arr, double* arr, int size)
{
	double max = abs_arr[0];
	int num = 0;
	for (int i = 0; i < size; ++i)
		if (abs_arr[i] > max)
		{
			max = abs_arr[i];
			num = i;
		}
	printf("Answer:");
	for (int i = 0; i < N; ++i)
		printf("\t%lf", arr[(num + i) % size]);
	putchar('\n');
}
