#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int an;
	float bbe, ttch, ttcr, ctl,sum;
	printf("Enter account number (-1 to end): ");
	scanf("%d", &an);
	while (an != -1)
	{
		printf("Enter beginning balance: ");
		scanf("%f", &bbe);
		printf("Enter total charges:");
		scanf("%f", &ttch);
		printf("Enter total credits:");
		scanf("%f", &ttcr);
		printf("Enter credit limit:");
		scanf("%f", &ctl);
		sum = bbe + ttch - ttcr;
		if (sum > ctl)
		{
			printf("Account:     %d\n",an);
			printf("Credit limit:%.2f\n",ctl);
			printf("Balance:     %.2f\n",sum);
			printf("Credit Limit Exceedde.\n\n");
		}
		else
		printf("\n");
		printf("Enter account number (-1 to end): ");
		scanf("%d", &an);
	}
	system("pause");
	return 0;
}