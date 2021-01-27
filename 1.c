#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i , j, n;
	for(i=1;i<5;i++){ 
		for(j=1;j<5;j++){
			for(n=1;n<5;n++){
				if(i!=j&&j!=n&&i!=n) //去除三個相同的排列
				printf("%d%d%d\n",i,j,n);  
			}
		}
	}
	
	
	system("PAUSE");
	return 0;
}
/*題目:有1、2、3、4個數字，能組成多少個互不相同且無重複數字的三位元數?都是多少?
程式分析:可填在百位、十位元、個位的數字都是1、2、3、4。組成所有的排列後再去掉不滿足條件的排列 
*/ 
