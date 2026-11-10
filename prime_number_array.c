#include <stdio.h>

int tool(int input,int array[],int counter);
int main(void) 
{
	const int number=100;
	int array[100] = {2};
	int input =3;
	int counter=1;
	while (counter<number) {
		if (tool(input,array,counter)) {
			array[counter++]=input;
		}
/*debug	
			{
			printf("input=%d\t counter=%d\t",input,counter);
			int input;
			for (input=0;input<number;input++) {
				printf("%d",array[input]);
			}
			printf("\n");
		}
*/
		input++;
	}
	int data=0;
	for (;data<counter;data++) {
		printf("%d\t",array[data]);
	}
	return 0;
}
int tool(int input,int array[],int counter) {
	int result = 1;
	int variable;
	for (variable=0;variable<counter;variable++) {
		if (input%array[variable]==0) {
			result =0;
			break;
		}
	}
	return result;
}