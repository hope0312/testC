#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i , sum;
//	sum = 0; �Ω�U���]�i// 
	for(i=1 , sum=0 ; i<=1000 ; i=i+1) {
		sum = sum + i;
		printf("i = %d ,sum = %d\n" , i , sum);
		//system("PAUSE"); �o�ӷ|���@��@��C�C�X�ӨS���N�@�f��]�X��//
	}
	printf("TOTAL=%d\n",sum);
	
	system("PAUSE");
	return 0;
}
//for�j�馳�T����� 
