#include<stdio.h>
#include<stdlib.h>
int f (int);
int main ()
{
	int x ,fvalue;
	printf("input an integer\n");
	scanf("%d",&x);
	fvalue = f(x);
	printf("x = %d, f(%d) = %d\n",x,x,fvalue);
	system("PAUSE");
	return 0;
}

int f (int x)
{
	int fvalue;
	fvalue = x*x-2*x+3;
	printf("x = %d , f(%d) = %d\n",x,x,fvalue);
	system("PAUSE");
	return fvalue;
}

//©I¥s¨ç¦¡ 
