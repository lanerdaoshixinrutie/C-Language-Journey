//Escape character
#include <stdio.h>

int main()
{
	printf("123\b\n456\n324\n");
	printf("\ti\tmiss\tyou\n");
	printf("\nhajimi\nnabeiludou\ba\n");
	char a='b';
	printf("%d %c\n",a,a);
	char c=36;
	printf("%d %c\n",c,c);
	char d='34';
	printf("%d %c\n",d,d);
	char e="ds";
	printf("%d %c\n",e,e);
/*  char a='a' or '3' save one point;
	char a='a'+1 --> 'b';
	char a=small integer --> 0~256 or -128~127;
	char a[10]="hello";
	char flag = 1;
	
	return 0;
}
