#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int x,y,i;
	int j = 0;
	srand(time(NULL));

	printf("�п�J�A�Q�n�]�X���H");
	scanf("%d",&i);
	
	for (j;j<i;j++){
	  x = rand();
	  y = x%2;
	  if (y==1){
		  printf("�襤����\n");
		}
	  else{
	      printf("��������\n");
		}
	}
	return 0;
}
