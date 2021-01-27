#include<stdio.h>
#include<stdlib.h>
float add_up(float,float);
float square_sum(float,float);
int main ()
{
	float x , y , sum ,square;
	printf("input 2 numbers\n");
	scanf("%f %f",&x,&y);
	//sum = x + y;
	sum = add_up(x, y);
	square = square_sum(x,y);
	printf("x = %5.2f , y = %5.2f , sum = %5.2f ,square= %5.2f\n",x,y,sum,square);
	system("PAUSE");
	return 0;
} 

float add_up (float x , float y)
{
	float sum;
	sum = x + y;
	printf("in add_up, x = %5.2f , y = %5.2f , sum = %5.2f\n",x,y,sum);
	system("PAUSE");
	return sum;
	//return x + y;
}

float square_sum (float x , float y)
{
	float square;
	square = (x*x)+(y*y);
	printf("in square_sum,x = %f , y =%f, square = %f\n",x,y,square);
	system("PAUSE");
	return square;
}
//輸入兩個值，計算和，印出結果 5.2取小數2位 把計算交給add_up這個小弟做，再將之回傳。 
