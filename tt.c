#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i , j ;
	int x , y,k=1 ;
	printf("a.\n");
	for (i=1;i<=5;i++){
		for(j=1;j<=11-i-i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\nb.\n");
	for(x=1;x<=3;x++){
		for(y=1;y<=x;y++){
			printf("%d",k++);
		}
		printf("\n");
	}
	
	return 0;
}
