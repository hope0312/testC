#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int n , i , sum;
	sum = 0;
	printf("��J�@�����\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		sum = i + sum;
	}
	printf("1+2+3+...+n = %d",sum);
	system ("PAUSE");
	return 0;
}
