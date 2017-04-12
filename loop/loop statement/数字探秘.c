#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char x;
	int i=0;
	int y;
	printf("请输入一个字符\n");
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
	printf("该符号二进制数中1的个数是：%d\n",i);
	system("pause");
	return 0;
}