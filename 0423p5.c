#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main ()
{
	int minute,second;
	printf("5 : 00\n");
	for(minute=4 ; minute>=0 ; minute--){
		for(second=59 ; second>=0 ; second--){
			Sleep(1000);
			printf("%d : %2d\n" , minute , second);
		}
	}
	
	system("PAUSE");
	return 0 ;
}
