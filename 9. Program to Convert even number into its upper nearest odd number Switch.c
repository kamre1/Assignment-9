#include<stdio.h>
int main()
{
	int number,choice;
	printf("Enter a number to be roundoff, to nearest odd or even\n");
	scanf("%d",&number);
	switch(number%2==0)
	{
		case 1:
			printf("Rounded off to nearest upper odd %d",number+1);
			break;
		case 0:
			printf("Rounded off to nearest lower even %d",number-1);

			break;
	}
}
