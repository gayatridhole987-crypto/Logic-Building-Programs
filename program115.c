#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int icnt = 0;
    bool bFlag = false;

    for(icnt = 2, bFlag = true; icnt <= iNo/2; icnt++)
    {
        if((iNo % icnt) ==0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
    
}

int main()
{
    int ivalue = 0;
    bool bret = false;

    printf("Enter Number :\n");
    scanf("%d",&ivalue);

    bret = CheckPrime(ivalue);

    if(bret)
    {
        printf("it is prime number");
    }
    else
    {
        printf("it is not prime number");
    }

    return EXIT_SUCCESS;
}