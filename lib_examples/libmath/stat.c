#include "libmath.h"

int mean(int *pArr, int size)
{
	int sum = 0;
	int i = 0;	

	for (; i < size; i++)
		//sum += pArr[i];
		sum = add(sum, pArr[i]);
	
	return sum / size;
}

