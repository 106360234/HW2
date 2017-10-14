#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k, l, m;
	char sign = '*';
	char sign2 = ' ';
	for (i = 1; i <= 5; i++)
	{
		for (j=5;j>i;j--)
		{
			printf("%c", sign2);
		}
		for (k=1;k<=2*i-1;k++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
	for (i=4;i>=1;i--)
	{
		for (j=1;j<=(5-i);j++)
		{
			printf("%c", sign2);
		}
		for (k=1;k<=2*i-1;k++)
		{
			printf("%c",sign);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}