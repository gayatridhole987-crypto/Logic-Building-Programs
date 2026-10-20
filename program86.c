/*
  ------------------------------------------------------------------

                        Operations ||
  -------------------------------------------------------------------
   Result1                Result2                  Final Result


  -------------------------------------------------------------------
   true                    true                          true               //SC
   true                    false                         true               //SC
   false                   true                          true
   false                   false                         false
 ---------------------------------------------------------------------
*/ 

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 5)==0) || ((iNo % 3)==0))
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }

}

int main()
{
    int ivalue = 0;

    printf("Enter Number : \n");
    scanf("%d",&ivalue);

    CheckDivisible(ivalue);

    return EXIT_SUCCESS;
}