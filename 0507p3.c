#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n , i ;
	printf("請輸入1個正整數\n");
	scanf("%d", &n);
	for(i =1 ; i <= n ; i ++ ){
		printf("%d\n",i);
	}
	system("PAUSE");
	return 0;
}
