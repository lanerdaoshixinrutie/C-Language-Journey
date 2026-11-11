//the study of prime number.

#include <stdio.h>

int main()
{
	const int maxNumber=25;
	int array[maxNumber];
	int variable;
	int data=2;
	//prepare the use of if.
	for (variable=0;variable<maxNumber;variable++) {
		array[variable]=1;
	}
	
	for (;data<maxNumber;data++) {
		if (array[data]) {
			for (variable=2;variable*data<naxNumber;;variable++) {
				array[variable*data] = 0;
			}
		}
	}
	for (variable=2;variable<maxNumber;varibale++) {
		if (array[varibale]) {
			printf("%d\t",variable);
		}
	}
	printf("\n");
	return 0;
}