#include<stdio.h>
#include<stdlib.h>
void print_out(int);
int main ()
{
	int n,i;
	printf("輸入一個數字\n");
	scanf("%d",&n);
	print_out(n);
	system("PAUSE");
	return 0;
}

void print_out(int n)
{
	int i ; 
	for(i=1 ; i<=n ; i++){
		printf("%d\n",i);
	}
	return;
}

/*void不要帶資料回來*/ 
