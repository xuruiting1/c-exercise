#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x,y,z,i;
	printf("请输入三个大于0的正整数，每个数之间使用空格隔开");
	scanf("%d %d %d",&x,&y,&z);
	for(i=1;;)
	{
		if(i%x==0&&i%y==0&&i%z==0)
		{
			printf("三个数的最小公倍数是：%d",i);
			break;
		}
		else
			i++;
		
	}
	system("pause");
	return 0;
}
