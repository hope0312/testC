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
	printf("需要%d天才能有1000000隻細菌",j);
	return 0;
}
