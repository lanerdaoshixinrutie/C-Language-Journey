// comprehend // understand something deeply
// event // 
//general // adj // most people agree // widespread // approximate amount not an exact figure // n // high-ranking military officer
//definition// n // a statement that explains the meaning of a word,phrase,or concept.//explaination
#include <stdio.h>
//born towards death.
void tool_one(int array[],int len,int *min);//clean data.
int main()
{
	int array[] = {3,35,64,42552,652544,13,4266,7646,4225,755,75,};
	int min;
	int len = sizeof(array)/sizeof(array[0]);
	tool_one(array,sizeof(array)/sizeof(array[0]),&min);
	
	//output// 
	for (int i=0;i<len;i++) {
		printf("%d\t",array[i]);
	}
	printf("\n");
	return 0;
}
void tool_one(int array[],int len,int *min) {
	int variable;
	min=array[0];
	for (variable=0;variable<len;variable++) {
		if (array[variable]<min) {
			*min=array[variable];
		}
	}
}
