#include<stdio.h>
int main()
{
	float number;
	int choice;
	printf("Select 1, for Negative to positive\n");
	printf("Select 2, for positive to negative\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter a Negative number\n");
			scanf ("%f",&number);
			number=number*(-1);
		    printf(" Positive form of the number is: %f \n",number);
			break;

		case 2:
			printf("Enter a Positive number\n");
			scanf("%f",&number);
			number=number*(-1);
			printf("Negative form of the number is: %f\n", number);
		    break;

		default:
		    printf("Invalid Input, or Characters entered");
	}
}
