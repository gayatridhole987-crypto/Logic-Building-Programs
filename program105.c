#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckPerfect(int iNo)
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
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue = 0;
    bool bret = false;
    
    printf("Enter Number : \n");
    scanf("%d",&ivalue);

    bret = CheckPerfect(ivalue);

    if(bret == true)
    {
        printf("it is perfect number");
    }
    else
    {
        printf("it is not a perfect number");
    }

    return EXIT_SUCCESS;
}
