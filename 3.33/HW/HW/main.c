#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	char sign = '*';
	char sign2 = ' ';
	for (i = 1; i < 4; i++)
	{
		for (j = 1; j < 13; j++)
		{
			if (i == 1 || i == 3 || j == 1 || j == 12)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}