//selection sort.
#include <stdio.h>
//funtion one : find the biggest number in this array.
int max(int array[],int len) {
	int maxid = 0;
	int i;
	for (i=1;i<len;i++) {
		if (array[maxid]<array[i]) {			//be careful of memory leak.
		maxid = i;
		}
	}	
	return maxid;
}
int main()
{
	int array_one[] = {3,5,32,6433,44,6426,4245,};
	int len = sizeof(array_one)/sizeof(array_one[0]);
	for (int i=len-1;i>0;i--) {
		int maxid = max (array_one,i+1);
		int swap=array_one[maxid];
		array_one[maxid]=array_one[i];
		array_one[i]=swap;
	}
/*	int t=array_one[maxid];													example.
	array_one[maxid]=a[sizeof(array_one)/sizeof(array_one[0])-1];
	a[sizeof(array_one)/sizeof(array_one[0])-1] = t;
*/
	for (int i=0;i<len;i++) {
		printf("%d\t",array_one[i]);
	}
	return 0;
}
