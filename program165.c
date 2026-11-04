#include<stdio.h>
#include<stdio.h>


void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
         if((iDigit % 2)==0)
         {
            printf("Even : %d",iDigit);
         }
         else
         {
            printf("Odd : %d",iDigit);

         }
        iNo = iNo/10;
    }

}
int main()
{
    int ivalue = 0;

    printf("Enter number :\n");
    scanf("%d",&ivalue);

    DisplayDigits(ivalue);

    return 0;

}