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

/* �o���D�ؤ��t��2�A�ҥH�n+2�A�n�ϥ�+=2�C*/ 
