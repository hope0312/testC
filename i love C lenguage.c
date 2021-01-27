#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#define false 0
#define true 1
int main()
{
	char letter[19] = "I love C language.";
	int i = 61 , j;
	while(true){
		if (kbhit()!=0)
		   break;
	    for (j=1;j<=i;j++){
	    	printf("");
		}
		printf("%s",letter);
		Sleep(1000/4);
		if(i>1)
		  i--;
		else
		  i=61;
		system("cls");
	}
	system("PAUSE");
	return 0;
}
