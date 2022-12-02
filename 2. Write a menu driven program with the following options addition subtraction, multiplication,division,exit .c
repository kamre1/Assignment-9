#include<stdio.h>
int main()
{

    int a,b,choice;
     while(1)
    {
    printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n:");
    printf("Enter your Number is:\n");
    scanf("%d %d", &a, &b);
    printf("Enter Your Choice Menu");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("Addition of two Number is: %d\n", a+b);
        break;

    case 2:
        printf("Subtraction of two Number is: %d\n", a-b);
        break;

    case 3:
        printf("multiplication of Two Number is: %d\n", a*b);
        break;

    case 4:
        printf("Division of Two Number is: %d\n", a/b);
        break;

    case 5:

        exit(0);

    default:

        printf("Enter invalid Input");

            }

    }
}
