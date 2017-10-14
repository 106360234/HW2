#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int mam, mtm, acn, mpi, acm;
	float ir;
	printf("Enter account number (-1 to end): ");
	scanf("%d", &acm);
	while (acm != -1)
	{		
		printf("Enter mortgage amount (in dollars):");
		scanf("%d", &mam);
		printf("Enter mortgage term (in year):");
		scanf("%d", &mtm);
		printf("Enter interest rate (as a decimal):");
		scanf("%f", &ir);
		mpi = (mam*mtm*ir + mam) / mtm / 12;
		printf("The monthly payable interest $ %d\n", mpi);
		printf("\n");
		printf("Enter account number (-1 to end): ");
		scanf("%d", &acm);
	}
	system("pause");
	return 0;
}