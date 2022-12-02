#include<stdio.h>
#include<stdlib.h>

int main()
{

    int x,y,z, choice;

    while(1)
    {
        printf("1.Isosceles Triangle \n");
        printf("2.Equilateral Triangle \n");
        printf("3.Right Angle Triangle \n");
        printf("4.Exit \n");



    printf("Enter Three Number\n");
    scanf("%d %d %d", &x,&y,&z);

    printf("Enter your Choice\n");
    scanf("%d", &choice);


    switch(choice)
    {
    case 1:
            if(x==y&&y!=z || y==z&&z!=x || z==x&&x!=y)
                printf("Isosceles Triangle \n");
            else
                printf("Not Isosceles Triangle \n ");
                break;

    case 2:
            if(x*x==y*y+z*z ||y*y==z*z+x*x || z*z==x*x+y*z)
                printf("Right Angle Triangle \n");
            else
                printf("Not Right Angle Triangle \n ");
                break;

    case 3:
            if(x==y && y==z)
                printf("Equilateral Triangle \n");
            else
                printf("Not Equilateral Triangle \n");
                break;

    case 4: exit(0);

    default:
        printf("Enter Valid Input\n");
        break;
      }
    }
 }
