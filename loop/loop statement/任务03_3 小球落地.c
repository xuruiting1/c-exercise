#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	float s=0.0;
	float h=100.0;
	for(i=1;i<11;i++)
	{ 
		h=h/2;
		s=s+h;
		printf("��%d�η����ĸ߶ȣ�%.6f\n", i,h);
	}
	printf("С�򷴵����ܸ߶ȣ�%.6f\n",s);
	system("pause");
	return 0;
}