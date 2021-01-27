#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum;
	sum = 0;
	printf("input a positive integer\n");
	scanf("%d",&n);
	for(i=1 ; i<=n ; i=i+1){
		sum = sum +i;
		printf("i =%d,sum =%d \n",i,sum);
	}
	printf("1+2+3+...+%d = %d\n",n,sum);
	system("PAUSE");
	return 0;
}
/* 跨行註解使用這兩個包含起來 
for(初始值；條件「&&是AND」；下一輪需要做什麼修正)
i=i+1  可用i++
sum=sum+i 可用sum+=i 
*/
