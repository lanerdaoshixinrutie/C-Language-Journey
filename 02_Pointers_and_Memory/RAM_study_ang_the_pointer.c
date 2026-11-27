//good evening.my dear prince.
#include <stdio.h>			//maybe from SSD.

void f(int *pointer);
void g(int number);

int main()					//funtion is located in stack.
{
	int variable_a=7;//4c
	int b=4;//48
	b=&variable_a;
	printf("%p\n",&b);//48		//virtual memory.
	printf("%p\n",b);//4c
	
	int* pointer=&b;//40
	printf("%p\n",&pointer);//40
	printf("%p\n",pointer);//48	//get the address of b;
	f(&pointer);
	g(pointer);
	
	return 0;
}
void f(int *pointer) {
	printf("pointer=%p\n",pointer);//40
	printf("pointer_one=%p\n",&pointer);//20
	printf("pointer_two=%p\n",*pointer);//48
}
void g(int number) {
	printf("hajimi=%p\n",&number);//20
}
