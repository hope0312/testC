#include<stdio.h>
#include<stdlib.h>
int main ()
{
	char x ; 
	char name [10];
	
	printf("input a character\n");
	scanf("%c", &x);
	printf("input a name\n");
	scanf("%s", name);
	printf("x = %c , x = %d ,name = %s\n" , x , x , name);
	
	system("PAUSE");
	return 0 ; 
}
//數入輸出英文字，輸入輸出名字。 中間是將X變成數字 EG:A=65
//name前面就不需要&串起來。 如何把整列的字串都抓近來不然空格後面的名字並部會抓進去需要研究。  
