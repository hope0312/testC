#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int x, y ;
	float average;
	printf("input 2 numbers\n");
	scanf("%d %d", &x , &y);
	average = (float)(x + y) / 2  ; 
	printf("x =%d, y =%d, average =%f\n",x ,y ,average);
	
	system("PAUSE");
	return 0 ;
}
//兩數相除，上面只會取商，解決方法，把上面2改成2.0或在(x+y)前面加(float)，強制型態轉換將值轉換為浮點數。 
//檔案如有問題，可使用另存新檔解決。 
