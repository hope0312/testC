#include<stdio.h>
#include<stdlib.h>
int add_up(int , int);
int big_small(int , int);
int main ()
{
	int x , y , sum , big;
	printf("�g�@C�{���A��J2�Ӿ�ơA���O�Ψ禡�I�s�p��M�H�Χ�X���j�ơA���O�|�Ǧ^�D�{���A�M��b�D�{�����A�N���̦L�X\n");
	scanf("%d %d",&x , &y);
	sum = add_up(x,y);
	printf("sum = %d\n",sum);
	big = big_small(x,y);
	printf("���j��%d\n", big);
	system("PAUSE");
	return 0;
}

int add_up (int x , int y)
{
	return x+y;
}

int big_small(int x , int y)
{
	return x>y ? x:y;
}
