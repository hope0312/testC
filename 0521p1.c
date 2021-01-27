#include<stdio.h>
#include<stdlib.h>
int add_up(int,int);

int main ()
{
	int x , y , sum;
	printf("input 2 integers\n");
	scanf("%d %d", &x , &y);
	sum = add_up(x,y);
	printf("x = %d , y = %d , sum = %d\n" , x , y , sum);
	system("PAUSE");
	return 0 ;
}

int add_up(int x , int y)
{
	int sum;
	sum = x + y ;
	return sum;
}
