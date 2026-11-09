//A war just because of my litter prince.
	//judge the prime number.
#include <stdio.h>

int tool_one (int input);

int main()
{
	int input;
	scanf("%d",&input);
	int result=tool_one(input);
	if (result==1) {
		printf("%d is prime number.",input);
	}
	else {
		printf("%d is not prime number.",input);
	}
	return 0;
}
//just because of my rose.
int tool_one (int input) {
//beware of baobab trees.
	if (input<0) {
		return 0;
	}
	if (input==1 ||
		(input!=2 && input%2==0)) {
		return 0;
	}
	
//cycle.
	int judgement = 1;
	for (int variable_one=3;variable_one*variable_one < input;variable_one+=2) {
		if (input % variable_one ==0) {
			judgement = 0;
			break;
		}
	}
	return judgement;
}