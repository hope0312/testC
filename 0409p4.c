#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int x, y;
	float average;
	printf("input 2nd integer\n");
	scanf("%d %d",&x,&y);
	average=(float)(x+y)/2;
	printf("x=%d, y=%d,average=%f\n",x,y,average);
	system("PAUSE");
	return 0 ;
}
