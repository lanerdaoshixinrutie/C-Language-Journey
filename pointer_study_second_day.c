#include <stdio.h>

int main()
{
	int a=5;//4c
	int b=7;//48
	b=&a;//cover
	int *c=&b;//40
	printf("a_address=%p,b_address=%p,c_address=%p\n",&a,&b,&c);
	printf("b_inner_thing=%d\n",b);	//a break address		decimal system
	printf("c_inner_thing=%p\n",c);//48 b_address
	printf("c_one_thing=%p\n",*c);//4c a_address not ture your computer add four zero before data.
	printf("c_second_thing=%d\n",*c);//a break address   dicimal system
	printf("get_result=%d\n",*c);		// because of the information loop weak ,we can not use**p it will warn
	return 0;
}