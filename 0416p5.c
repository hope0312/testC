#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	for(i=1 ; i<=9 ; i=i+1){
		for(j=1 ; j<=9 ; j=j+1){
			printf("%d*%d=%d\n",i,j,i*j);
			//system("PAUSE");//
		}
	}
	
	
	system("PAUSE");
	return 0;
}
//九九乘法表// 
