// hello,pointer.
#include <stdio.h>

int main()
{
/*	int a;
	a=5;
	int p;
	p=(int)&a;

	printf("%x\n",&a);
	printf("%p\n",a);
	printf("%p\n",&a);
	printf("%x\n",p);
	printf("%p\n",&p);
	*/
	int a=0;
	int b;
	b=&a;
	int c[10];
	printf("%p\n",&c);
	printf("%p\n",c);
	printf("%p\n",c[0]);
	printf("%p\n",c[1]);

	return 0;
}
