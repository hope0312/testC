#include<stdio.h>
#include<stdlib.h>
void print_out(int);
int main ()
{
	int n,i;
	printf("��J�@�ӼƦr\n");
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

/*void���n�a��Ʀ^��*/ 
