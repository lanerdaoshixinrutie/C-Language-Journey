//the funtion of pointer.
#include <stdio.h>

void swap(int *variable_1,int *variable_2);
void minmax(int array[],int len,int *min,int *max);

int main()
{
	int a=6;
	int b=8;
	printf("a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d b=%d\n",a,b);
	
	return 0;
}
void swap(int *variable_1,int *variable_2) {
	int tool_1=*variable_1;
	*variable_1=*variable_2;
	*variable_2=tool_1;
	//Note: if the code is these: variable_1--> it represents the address ,it a varriable for saving the address in RAM.
	//		*variable means that get the address to change or bring values in the box which noted the address numbers.
}
void minmax(int array[],int len,int *min,int *max) {
	for (int i=0;i<len;i++) {//essential item: i<len, not i<len-1;
		if (array[i]<*min) {
			*min = array[i];
		}
		if (array[i]>*max) {
			*max = array[i];
		}
	}
}