#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i , j , k;
	char sign='*';
	char sign2 =' ';
	
	printf("(A)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
	printf("\n");

	printf("(B)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >=i; j--)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
	printf("\n");

	printf("(C)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j=0;j<(i-1);j++)
		{
			printf("%c", sign2);
		}
		for (k=10;k>=i;k--)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
	printf("\n");

	printf("(D)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j>i; j--)
		{
			printf("%c", sign2);
		}
		for (k = 0; k <i; k++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}