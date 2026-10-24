#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int icnt = 0;
    int isum = 0;

    for(icnt = 1; icnt <= iNo/2; icnt++)
    {
        if((iNo % icnt)==0)
        {
            isum = isum + icnt;
        }

    }
    
    if(isum == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int ivalue = 0;
    bool bret = false;

    printf("Enter Number :\n");
    scanf("%d",&ivalue);

    bret = CheckPrime(ivalue);

    if(bret == true)
    {
        printf("it is prime number");
    }
    else
    {
        printf("it is not prime number");
    }

    return EXIT_SUCCESS;
}