//Reflection.
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	const char *a[20]="hello,world";
	const char  b[20]="hello,world";
	printf("%p %p",a,&b);
	printf("%3c %c %c",a,a,b);
	
	char c[10];
	scanf("%9c",&c);//want to receive a pointer.
	printf("%c",c);
	
//	strcmp (const char a,const char b);
//  strcat 
	return 0;
}
