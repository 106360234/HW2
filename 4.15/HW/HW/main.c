#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int years;
	float ir,sum;
	for (ir = 0.10; ir <= 0.125; ir = ir + 0.005)
	{
		printf("money = 5000\n");
		printf("interest rate = %.1f%%\n", ir*100);
		for (years = 1; years < 16; years++)
		{
			sum = 5000 * pow((1.0+ir), years);
			printf("years : %2d\t",years);
			printf("%.2f\n",sum);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}