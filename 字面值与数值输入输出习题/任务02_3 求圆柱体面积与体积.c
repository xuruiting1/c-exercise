/**
˵��������02_3��Բ������������
������������
ѧ�ţ�723
�༶��8��
���ڣ�2017/03/18
*/
#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main(void)
{

	float r,h;
	printf("������Բ����İ뾶Ϊ:  ");
	scanf("%f",&r);
	printf("������Բ����ĸ�Ϊ:  ");
	scanf("%f",&h);
	printf("Բ����ı����Ϊ%.2f\n",2*PI*r*r+2*PI*r*h);
	printf("Բ��������Ϊ%.2f\n", PI*r*r*h);
	system("pause");
	return 0;

}
