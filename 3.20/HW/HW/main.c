#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hours;
	float rate,Salary;
	printf("Enter # of hours worked (-1 to end): ");
	scanf("%d", &hours);
	while (hours != -1)
	{
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);
		if (hours > 40)
		{
			Salary = hours * rate + (hours - 40)*(rate / 2);
		}
		else
		{
			Salary = hours*rate;
		}
		printf("Salary is $ %.2f\n\n", Salary);
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hours);
	}
	system("pause");
	return 0;
}