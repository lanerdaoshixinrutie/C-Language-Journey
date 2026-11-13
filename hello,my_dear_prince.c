// when i finish to eat dinner,i begin to study c.hello,my little prince.
/*#include <stdio.h>

int main()
{
//input
	int agent;
	int amateur;
	const int judgement=100;
	int array[judgement];
	
	for (agent=0;agent<judgement;agent++) {
		array[agent]=1;
	}
//black box.
	for (agent=2;agent<judgement;agent++) {
		if (array[agent]) {
			for (amateur=2;amateur*agent<judgement;amateur+=2) {
				array[amateur*agent]=0;
			}
		}
	}
//output.
	for (agent=1;agent<judgement;agent++) {
		if (array[agent]) {
			printf("%d\t",agent);
		}
	}
	printf("\n");
	return 0;
}
*/
// int c; declared. Granted a memory address, yet left empty.
// Only when the loop runs is the door pushed open, revealing the dust and the dark.
// Growing up, the Little Prince returns to his star. The door locks once more,
// waiting to be unlocked by the next iteration.


//search.
/*#include <stdio.h>

int tool(int key,int array[],int number);

int main()
{
	int array[]= {3,5,32,5,2,6,13,5232,};
	int number=sizeof(array);
	int input;
	scanf("%d",&input);
	int result=tool(input,array,number);		//also you can use tool(input,array,sizeof(array)/sizeof(array[0]))
	
	if (result==-1) {
		printf("no\n");
	}
	else {
		printf("%d",result);
	}
	return 0;
}
int tool(int key,int array[],int number) {
	int result=-1;
	int agent;
	for (agent=0;agent<number;agent++) {
		if(key==array[agent]) {
			result=agent;					//we would better make it just one output.
			break;							//this is not good	if (i=number) {return -1} else { return agent}
		}
	}
	return result;
}
*/


/*
1	penny;
5	nickel;
10	diem;
25	quater;
50	half-doller;
*/
#include <stdio.h>
//pointer.
	int array_number[]={1,5,10,25,50,};
	char *name[]={"penny","nickel","diem","quater","half-doller",};
struct {
	int array_number;
	 char *name;
}coins[] = {
	{1,"penny"},
	{5,"nickel"},
	{10,"diem"},
	{25,"quarter"},
	{50,"half-dollar"}
};
//int tool(int key,int array[],int number);
int main()
{
	int input;
	scanf("%d",&input);
	int judgement=0;
//	int result=tool(input,array_number,sizeof(array_number)/sizeof(array_number[0]));		//also you can use tool(input,array,sizeof(array)/sizeof(array[0]))
	for (int i=0;i<sizeof(coins)/sizeof(coins[0]);i++) {
		if (input==coins[i].array_number) {
			printf("%s\n",coins[i].name);
			judgement=1;
			break;
		}
		else {
			continue;
		}
	}
	if (judgement!=0) {
		printf("manbo\n");
	}
	else {
		printf("no");
	}
	return 0;
}
/*
int tool(int key,int array[],int number) {
	int result=-1;
	int agent;
	for (agent=0;agent<number;agent++) {
		if(key==array[agent]) {
			result=agent;					//we would better make it just one output.
			break;							//this is not good	if (i=number) {return -1} else { return agent}
		}
	}
	return result;
}
*/























































