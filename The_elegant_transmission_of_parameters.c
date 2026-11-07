// The elegant transmission of parameters.
#include <stdio.h>
int cheer(int number1) {
	printf("cheer %d\n",number1);
	return number1;
}
int main()
{
	cheer(2.4);
	return 0;
}