#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
	long int i,x,y,z;
	for(i=1;i<100000;i++){
		x=sqrt(i+100);
		y=sqrt(i+286);
		if(x*x==i+100&&y*y==i+286)
		printf("n%ldn",i);
	}
	system("PAUSE");
	return 0;
}

