#include<stdio.h>
#include<stdlib.h>
#define true 1
int main()
{
	int i =1 , j=0;
	while(true){
		i*=2;
		j++;
		if (i>=1000000)
		  break;
	}
	printf("���v%d�V�˔\�L1000000�Ǎ׋�",j);
	return 0;
}
