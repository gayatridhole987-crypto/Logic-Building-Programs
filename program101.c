#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
     int icnt = 0;

    printf("Factors of %d are:\n",iNo);

    for(icnt = 1; icnt < iNo/2; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            printf(" %d\n",icnt);
        }
    }
}

int main()
{
    int ivalue = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&ivalue);

    DisplayFactor(ivalue);

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)