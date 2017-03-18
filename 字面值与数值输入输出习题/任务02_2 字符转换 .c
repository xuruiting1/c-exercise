#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char x,y,z;
	printf("请输入三个小写英文字母\n");
	scanf("%c %c %c", &x,&y,&z);
	printf("%hhd %hhd %hhd\n",x,y,z);
	printf("%c %c %c\n",x-32,y-32,z-32);
	system("pause");
	return 0;
}