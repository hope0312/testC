#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i , sum ;
	sum = 0;
	for(i = 1 ; i <= 999 ; i+=2){
		sum = sum + i;
	}
	printf("Total=%d\n",sum);
	system("PAUSE");
	return 0;
}

/* 這邊題目公差為2，所以要+2，要使用+=2。*/ 
