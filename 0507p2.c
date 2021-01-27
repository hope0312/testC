#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int x , y , z , v ,sum;
	printf("輸入2個整數，以計算平方和\n");
	scanf("%d %d", &x , &y);
	z = x * x ;
	v = y * y ;
	sum = z + v ;
	printf("sum=%d",sum);
	system("pause");
	return 0 ;
}
