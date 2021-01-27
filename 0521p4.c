#include<stdio.h>
#include<stdlib.h>
int f(int);
int g(int);
int main ()
{
	int x,value;
	printf("input a positive integer\n");
	scanf("%d",&x);
	value = f(x);
	printf("x = %d,f(%d) = %d\n",x,x,value);
	system("PAUSE");
	return 0;
}


int f (int x)
{
	return 2*x*g(x)+3;
}

int g (int x)
{
	return x*x-4;
}

