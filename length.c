#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n , i =1;
	float length =100 , distance =0;
	printf("Aün:");
	scanf("%d",&n);
	while(i<=n){
		distance += length;
		length/=2;
		distance+=length;
		i++;
	}
	distance-=length;
	printf("ć%dnCăSßIŁ=%f\n",n,distance);
	printf("ć%d˝[Ix=%f\n",n,length);
	system("PAUSE");
	return 0;
}
