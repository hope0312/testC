#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i , j ;
	for(i=9 ; i>=1 ; i=i-1){
		for(j=9 ; j>=1 ; j=j-1){
			Sleep(1000); //����1��=1000�A�n�j�g�C // 
			printf("%d*%d=%d\n",i,j,i*j);
		}
	}
	system("PAUSE");
	return 0;
}
//�f�A�ͤE�E���k��// 
