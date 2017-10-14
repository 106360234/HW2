#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int code,pnum;
	float salary, hours, days, weeks,samt,pmon;
	float sum = 0.0;
	printf("Enter your professional code: ");
	scanf("%d", &code);
	switch (code)
	{
		case 1:
			printf("Enter your salary of a week: ");
			scanf("%f", &salary);
			printf("How many weeks do yo work: ");
			scanf("%f", &weeks);
			sum = salary*weeks;
			printf("Your salary of a month is $ %.2f\n", sum);
			break;
		case 2:
			printf("Enter your salary of a hour: ");
			scanf("%f", &salary);
			printf("How many hours do you work: ");
			scanf("%f", &hours);
			if (hours > 40.0)
			{
				sum = salary * 40 + (hours - 40)*(1.5*salary);
			}
			else
			{
				sum = salary*hours;
			}
			printf("Your salary of a month is $ %.2f\n", sum);
			break;
		case 3:
			printf("How many weeks do you work: ");
			scanf("%f", &weeks);
			for (unsigned i = 1; i <= weeks; i++)
			{
				printf("How much is your sales amount: ");
				scanf("%f", &samt);
				sum = sum + 250.0 + (samt*0.057);
			}
			printf("Your salary is $ %.2f\n", sum);
			break;
		case 4:
			printf("How many products do you work: ");
			scanf("%d", &pnum);
			printf("How much money does a product: ");
			scanf("%f", &pmon);
			sum = pnum*pmon;
			printf("Your salary is $ %.2f\n", sum);
			break;
	}
	system("pause");
	return 0;
}