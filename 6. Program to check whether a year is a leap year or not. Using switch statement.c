#include<stdio.h>
int main()
{
    int year =2000;

    switch(year%100==0)
    {
      case 0:
              switch(year%4==0)
              {
                    case 0:
                           printf(" Not LeapYear");
                           break;

                    case 1:
                           printf("LeapYear");
                           break;
              }
              break;

      case 1:

              switch (year%400==0)
              {

                     case 0:
                            printf(" Not LeapYear");
                            break;


                     case 1:
                           printf("LeapYear");
                           break;
               }


    }
}
