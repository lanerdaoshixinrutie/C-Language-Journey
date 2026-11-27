// character string variable
#include <stdio.h>

int main()
{
/*	char i=45;
	printf("%d %c\n",i,i);
	char a='40';//wrong
	printf("%d %c\n",a,a);
	char b='a';
	printf("%d %c\n",b,b);
//	char c=a;//wrong
//	printf("%d %c\n",c,c);
//	char c="2";//wrong
//	printf("%d %c\n",c,c);
//	char c[]='3','4','5','7';//wrong
//	char c[]={'3','4','5','6',};//wrong
//	char c[]={'3','4','5','6',0};//wrong
//	char c[]={"3","4","5","6",0};//wrong
//	printf("%d %c",c,c);
	char c[]={'3','4','5','6',0};
	printf("%s\n",c);
	*/
//	char *s="Hello,\tworld.\n";//it located in the area of .rodata
	
//	s[0]='B';//SIGSEGV
//	printf("%s\n",s);//you just can use %s to get result.
//	printf("here s[0]=%c\n",s[0]);error;
/*	char b[]="hello,world";
	printf("%s\n",b);
	char c[]={'h','e','l','l','o',0};//if you not want to add 0, it will make huge error.
	printf("%s\n",c);
	b[0]='s';
	printf("%s\n",b);
	*/
	
//a small game;
	int i ;
	for (i=1;i<10;i++) {
		for (int b=1;b<=i;b++) {
			printf("%d*%d=%d\t",i,b,i*b);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
