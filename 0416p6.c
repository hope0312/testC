#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i , j ;
	for(i=9 ; i>=1 ; i=i-1){
		for(j=9 ; j>=1 ; j=j-1){
			Sleep(1000); //停滯1秒=1000，要大寫。 // 
			printf("%d*%d=%d\n",i,j,i*j);
		}
	}
	system("PAUSE");
	return 0;
}
//逆再生九九乘法表// 
