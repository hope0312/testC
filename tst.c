#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y;
	char name[10];
	printf("請輸入你的姓名和成績\n");
	scanf("%s %d",name,&x);
	y=x+5;
	printf("name=%s , 成績=%d\n" ,name,y);
	
	system("PAUSE");
	return 0;
	
}
