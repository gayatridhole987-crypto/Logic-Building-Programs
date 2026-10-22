#include<stdio.h>
#include<stdlib.h>

unsigned long long Factorial(int iNo)
{
     long int icnt = 0;
     long long ifact =0;

    for(icnt =1, ifact = 1; icnt <= iNo; icnt++)
    {
        ifact = ifact * icnt;
    }

    return ifact;
}

int main()
{
    int ivalue = 0;
    unsigned long long iret = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&ivalue);

    iret = Factorial(ivalue);

    printf("Factorial is : %lld\n",iret);

    return EXIT_SUCCESS;
}