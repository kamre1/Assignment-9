
#include<stdio.h>
int main()
{
    int month;
    printf("Enter Your Month:\n");
    scanf("%d", &month);

    switch(month)
    {
    case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

        printf("Enter month of days is 31 \n ");
        break;
    case 2:
        printf("Enter month of days is 28\29 \n");
        break;

        case 4:
        case 6:
        case 9:
        case 11:

       printf("Enter month of days is 30\n");
       break;

    default:
        printf("Enter your month is invalid\n try again later.....");
        break;


    }
}
