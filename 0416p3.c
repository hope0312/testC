#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i , sum;
//	sum = 0; 或放下面也可// 
	for(i=1 , sum=0 ; i<=1000 ; i=i+1) {
		sum = sum + i;
		printf("i = %d ,sum = %d\n" , i , sum);
		//system("PAUSE"); 這個會讓一行一行慢慢出來沒打就一口氣跑出來//
	}
	printf("TOTAL=%d\n",sum);
	
	system("PAUSE");
	return 0;
}
//for迴圈有三個欄位 
