#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x,y,z,i;
	printf("��������������0����������ÿ����֮��ʹ�ÿո����");
	scanf("%d %d %d",&x,&y,&z);
	for(i=1;;)
	{
		if(i%x==0&&i%y==0&&i%z==0)
		{
			printf("����������С�������ǣ�%d",i);
			break;
		}
		else
			i++;
		
	}
	system("pause");
	return 0;
}
