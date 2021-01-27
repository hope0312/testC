#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x , y , product;
	printf("input 1st integer\n");
	scanf("%f",&x);
	printf("x = %f\n",x);
	
	printf("input 2nd integer\n");
	scanf("%f",&y);
	printf("y =%f\n",y);
	
	product = x * y ;
	printf("x = %f, y =%f , product =%f\n" , x , y , product );
	
	
	system("PAUSE");
	return 0;
}
//上面為小數運算，FLOAT為浮點數，%F為輸出小數點。 
