/* 
extensive
definition	n	explian concept, illustrate the princleple, demostrate 
destination  n 	the place where you really want to exeperience.
infinite    adj		limitless,endless,impossible to measure
perserverance	n	the quality of continuing to do something in spite of difficulties.
*/
#include <stdio.h>

void f(int **p);
void g(int *p);
int main()
{
	int a=6;//4c
	int *b=&a;//40
	int **c=&b;//38
	printf("a_address=%p\nb_address=%p\nc_address=%p\n",(void*)&a,(void*)&b,(void*)&c);
	f(c);// if we want to input *c or **c,the pointer will become a integer,and it can't use the funtion of address.
	f(&b);
	printf("%d\n",a);
	g(b);
	g(&a);
	printf("%d\n",a);
	return 0;
} 
void f(int **p) {
	printf("one=%d\n",**p);
	printf("two=%p\n",p);
	printf("three=%p\n",&p);
	**p=34;
	
}
void g (int *p) {
	printf("first=%d\n",*p);
	printf("second=%p\n",p);
	printf("third=%p\n",&p);
	*p=36;
}