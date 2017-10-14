#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float sales, salary;
	printf("Enter sales in dollars (-1 to end): ");
	scanf("%f", &sales);
	while (sales != -1)
	{
		salary = sales*0.09 + 200.00;
		printf("Salary is: $ %.2f\n\n", salary);
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &sales);
	}
	system("pause");
	return 0;
}