#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y,sum;
	printf("input 1st integer\n");
	scanf("%d",&x);
	printf("x = %d\n", x);
	
	printf("input 2nd integer\n");
	scanf("%d",&y);
	printf("y = %d\n", y);
	
	sum = x + y ;
	printf("x = %d , y = %d , sum = %d \n" , x , y , sum);
	
	system("PAUSE");
	return 0;
}
//上面為整數運算，INT為整數，%D為輸出整數。 
