#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int x,y,i;
	int j = 0;
	srand(time(NULL));

	printf("請輸入你想要跑幾次？");
	scanf("%d",&i);
	
	for (j;j<i;j++){
	  x = rand();
	  y = x%2;
	  if (y==1){
		  printf("穿中筒襪\n");
		}
	  else{
	      printf("穿隱形襪\n");
		}
	}
	return 0;
}
