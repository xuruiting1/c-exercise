/**
说明：任务02_3求圆柱体面积与体积
姓名：徐瑞婷
学号：723
班级：8班
日期：2017/03/18
*/
#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main(void)
{

	float r,h;
	printf("请输入圆柱体的半径为:  ");
	scanf("%f",&r);
	printf("请输入圆柱体的高为:  ");
	scanf("%f",&h);
	printf("圆柱体的表面积为%.2f\n",2*PI*r*r+2*PI*r*h);
	printf("圆柱体的体积为%.2f\n", PI*r*r*h);
	system("pause");
	return 0;

}
