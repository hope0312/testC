#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int x , y , sum;
	printf("\"輸入兩個整數\"\n");
	scanf("%d %d",&x,&y);
	sum = x + y;
	printf("x = %d , y = %d ,sum = %d\n",x,y,sum);
	system("PAUSE");
	return 0;
}
