#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k;
	int l1;
	l1 = 1;
	char sign = '*';
	char sign2 = ' ';
	printf("(A)       \t(B)       \t(C)       \t(D)       \n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= l1; j++)
		{
			printf("%c", sign);
		}
		for (k = 1; k <= (10 - l1); k++)
		{
			printf("%c", sign2);
		}
		
		printf("\t");
		//-----------------(1)
		
		for (j = 10; j >= l1; j--)
		{
			printf("%c", sign);
		}
		for (k = 10; k > (11 - l1); k--)
		{
			printf("%c", sign2);
		}
		
		printf("\t");
		//------------------(2)
		for (j=10;j>(11-l1);j--)
		{
			printf("%c", sign2);
		}
		for (k=10;k>=l1;k--)
		{
			printf("%c",sign);
		}
		
		printf("\t");
		//--------------------------(3)
		
		for (j=1;j<=(10-l1);j++)
		{
			printf("%c", sign2);
		}
		for (k=1;k<=l1;k++)
		{
			printf("%c", sign);
		}
		
		//-------------------------------(4)
		l1 = l1 + 1;
		printf("\n");
		
	}
	printf("\t\t原來這樣也行~!\n");
	system("pause");
	return 0;
}