//funtions of string.
/*#include <stdio.h>
#include <string.h>

int main(int argc,const char *argv[])
{
	char line[]="hello";
	printf("strlen=%lu\n",strlen(line));
	printf("sizeof=%lu\n",sizeof(line));
	const char s1[]="abc";
	const char s2[]="abc";
	printf("strcmp=%d\n",strcmp(s1,s2));//ASCII.
	printf("%d\n",'a'-'A');
	
	return 0;
}
*/
#include <stdio.h>

int main()
{	//input
	int count=0;
	char input[100];
	fgets(input,100,stdin);//if we use scanf and %s,it will stop when he meet space,tab and enter.
	int judge=1;//control.
	
	//black box.
		for (int i=0;input[i]!='/0';i++) {
			if (input[i]!=' '&&input[i]!='.') {
				count++;
			}
			if (input[i]==' ') {
				if(count>0) {
					if (judge) {
						printf("%d",count);
						judge=0;
						}
					else {
						printf(" %d",count);
						}
					}
				count=0;
			}
			if (input[i]=='.') {
				if (judge) {
						printf("%d",count);
						}
					else {
						printf(" %d",count);
						}
				break;
			}
		}
	
	
	return 0;
}




























