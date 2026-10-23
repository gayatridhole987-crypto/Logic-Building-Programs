#include<stdio.h>
#include<stdlib.h>

void  CheckPerfect(int iNo)
{
    int icnt = 0, isum = 0;

    for(icnt = 1; icnt <= iNo/2; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            isum = isum + icnt;
        }
    }

    if(isum == iNo)
    {
        printf("It is perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
}

int main()
{
    int ivalue = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&ivalue);

    CheckPerfect(ivalue);

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)