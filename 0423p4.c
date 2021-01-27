#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i , j;
	for(i=9 ; i>=1 ; i--){
		for(j=9 ; j>=1 ; j--){
			printf("%d * %d = %2d\n",i,j,i*j);
		}
	}
	
	system("PAUSE");
	return 0 ; 
}
