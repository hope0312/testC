#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int x, y ;
	float average;
	printf("input 2 numbers\n");
	scanf("%d %d", &x , &y);
	average = (float)(x + y) / 2  ; 
	printf("x =%d, y =%d, average =%f\n",x ,y ,average);
	
	system("PAUSE");
	return 0 ;
}
//��Ƭ۰��A�W���u�|���ӡA�ѨM��k�A��W��2�令2.0�Φb(x+y)�e���[(float)�A�j��A�ഫ�N���ഫ���B�I�ơC 
//�ɮצp�����D�A�i�ϥΥt�s�s�ɸѨM�C 
