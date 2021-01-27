#include<stdio.h>
#include<stdlib.h>
int add_up(int , int);
int big_small(int , int);
int main ()
{
	int x , y , sum , big;
	printf("寫一C程式，輸入2個整數，分別用函式呼叫計算和以及找出較大數，分別會傳回主程式，然後在主程式中，將它們印出\n");
	scanf("%d %d",&x , &y);
	sum = add_up(x,y);
	printf("sum = %d\n",sum);
	big = big_small(x,y);
	printf("較大為%d\n", big);
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
