//character string.
#include <stdio.h>

int main()
{
	char a[] ={'H','e','l','l','o','!','\0'};
	printf("%s",a);
	char *str="hello!";
	char world[]="hello!";
	char line[10]="hello";//ten byte area. but string is 6 bytes,computer will generate the 0 to finish;
	//printf("anabd"   "dsa")will connect it  or printf("ananba\ adbh"the space will be saved;
	return 0;
}
