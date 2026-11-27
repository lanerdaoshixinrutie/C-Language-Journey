#include <stdio.h>

int main()
{
/*	char *a="hello world.";
	char *b;
	b=a;
	scanf("%s %s",&a,&b);
	printf("%s##%s##\n",a,b);
	*/
	char *a[10];//10 pointer array,including ten pointers which direct the character.
	char *b[10];
	a[0] = malloc(20*sizeof(char));
	b[0] = malloc(20*sizeof(char));
	
	scanf("%9s %9s",a[0],b[0]);//prevent the input is extensive.
	printf("%s##%s##\n",a[0],b[0]);
	
	free(a[0]);
	free(b[0]);
	
	char *m[100] = " ";//right.
	char *n[] = " ";//right.
	
	return 0;
}
