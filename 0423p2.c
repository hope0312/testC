#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum;
	printf("input a positive integer\n");
	scanf("%d",&n);
	for(i=n,sum=0;i>=1;i=i-1){
	  sum = sum+i;
	  printf("i=%d,sum=%d\n",i,sum);	
	}
	
	system("PAUSE");
	return 0 ;
}
/* 逆再生加到N */
