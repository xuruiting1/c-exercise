#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char x;
	int i=0;
	int y;
	printf("������һ���ַ�\n");
	scanf("%c", &x);
	y=x;
	for(i=1;(y/2)!=0;)
	{
		if(y%2==1)
		{
			i++;
			y=y/2;
		}
		else
			y=y/2;
	}
	printf("�÷��Ŷ���������1�ĸ����ǣ�%d\n",i);
	system("pause");
	return 0;
}