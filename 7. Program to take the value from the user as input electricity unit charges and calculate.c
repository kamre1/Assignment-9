#include<stdio.h>
#include<stdlib.h>
int main()
{
	int unit;
	float amount,total_amount,s_charge;
	printf("enter the number of units you consumed\n");
	scanf("%d",&unit);
	switch(unit<=50)
	{
		case 1:
			amount=unit*0.50;
			break;
			case 0:
				switch(unit<=150)
				{
					case 1:
						amount=25+(unit-50)*0.75;
						break;
						case 0:
							switch(unit<=250)
							{
								case 1:
								amount=100+(unit-150)*1.20	;
								break;
								case 0:
								amount=220+(unit-250)*1.50;
								break;
							}
						break;
				}
			break;
	}
	s_charge=amount*0.20;
	total_amount=amount+s_charge;
	printf("your total bill is Rs: %f",total_amount);
}
