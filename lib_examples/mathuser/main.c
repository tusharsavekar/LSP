#include <stdio.h>
#include "libmath.h"
#include "printresult.h"

int main()
{
	int c = add(10, 20);
	printR(c);	

	int arr[5] = {1,2,3,4,5};
	int mean = mean(arr, 5);
	printR(mean);

	return 0;
}
