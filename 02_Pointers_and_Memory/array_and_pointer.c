#include <stdio.h>

void minmax(int array[],int len,int *max,int *min);
int main()
{
	int array[] = {3,5,6,12,31,43,45,63,64,73,3133,6242,542353,};//Stack
	int min,max;//Stack
	printf("a_address=%p\n",&array);
	printf("sizeof(a)=%zu\n",sizeof(array)/sizeof(array[0]));
	minmax(array,sizeof(array)/sizeof(array[0]),&max,&min);
	printf("min=%d max=%d\n",min,max);
	int *pointer = &min;
	printf("*pointer=%d\n",*pointer);
	printf("pointer[0]=%d\n",pointer[0]);//pointer[i]==*(p+i)
	return 0;//Stack
}
void minmax(int array[],int len,int *max,int *min) {//the array has decayed to a pointer.
	int i;//stack
	printf("minmax_sizeof(a)=%zu\n",sizeof(array)/sizeof(array[0]));
	printf("a_address=%p\n",array);
	array[0]=1000;
	*min = *max = array[0];
	for (i=1;i<len;i++) {
		if ( array[i] < *min ) {
			*min = array[i];
		}
		if ( array[i] > *max ) {
			*max = array[i];
		}
	}
}
//note1:When an array is passed as a funtion argument,it decays to a pointer to its first element.
//note2:the funtion of "sizeof" we'd better use %zu to printf .
//note3:
