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
/* �����Ѩϥγo��ӥ]�t�_�� 
for(��l�ȡF����u&&�OAND�v�F�U�@���ݭn������ץ�)
i=i+1  �i��i++
sum=sum+i �i��sum+=i 
*/
