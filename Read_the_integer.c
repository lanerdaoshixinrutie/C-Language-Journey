// Read the integer.
#include <stdio.h>

int main()
{
	int number1;
	int diviser;
	int copy1;
	scanf("%d",&number1);
	copy1=number1;
//judgement.
	if (number1<0) {
		number1 = -number1;
		printf("fu ");
		copy1=number1;
	}
	if (number1==0){
		printf("ling");
		return 0;
	}
	for (diviser=1;number1>9;diviser*=10) {
		number1=number1/10;
	}
/* number1=546
answer=546/100=5
number1=number1%diviser=46
diviser/10
   if number1=1000;
   YOU need to take the number zero and negative numbers into account.
*/
	number1=copy1;				//clean data.
	for (;diviser>0;diviser/=10) {
		int answer = 0;				//Ensure that data is automatically destroyed after use.
		answer=number1/diviser;				
		if (answer==0) {
			printf("ling");
		}
		else if (answer==1) {
			printf("yi");
		}
		else if (answer==2) {
			printf("er");
		}
		else if (answer==3) {
			printf("san");
		}
		else if (answer==4) {
			printf("si");
		}
		else if (answer==5) {
			printf("wu");
		}
		else if (answer==6) {
			printf("liu");
		}
		else if (answer==7) {
			printf("qi");
		}
		else if (answer==8) {
			printf("ba");
		}
		else if (answer==9) {
			printf("jiu");
		}
		number1=number1%diviser;
		if (diviser>1) {
			printf(" ");
		}
	}
	
	return 0;
}