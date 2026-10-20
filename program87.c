#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 5)==0)
    {
        printf("Divisible");
    }
    else if((iNo % 3)==0)                                    //Nested if
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