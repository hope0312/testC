#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int i , j, n;
	for(i=1;i<5;i++){ 
		for(j=1;j<5;j++){
			for(n=1;n<5;n++){
				if(i!=j&&j!=n&&i!=n) //�����O�����I�r��
				printf("%d%d%d\n",i,j,n);  
			}
		}
	}
	
	
	system("PAUSE");
	return 0;
}
/*���:�L1�A2�A3�A4�Ɏ��C�\�g�������ݕs���������d���Ɏ��I�O�ʌ���?�s������?
��������:�U�ݕS�ʁA�\�ʌ��A�ʓI�Ɏ��s��1�A2�A3�A4�B�g�����L�I�r���ċ��{�s�ޑ������I�r�� 
*/ 
