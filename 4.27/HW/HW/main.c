#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	printf("a是底，b是高，c是斜邊\n");
	for (c = 1; c <= 500; c++)
	{
		for (a = 1; a <= c; a++)
		{
			for (b = 1; b <= c; b++)
			{
				if (c*c == a*a + b*b)
					printf("a=%3d\tb=%3d\tc=%3d\n", a, b, c);
			}
		}
	}
	system("pause");
	return 0;
}