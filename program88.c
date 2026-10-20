#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue = 0;
    int icnt = 0;

    for(icnt =1; icnt <= ivalue; icnt++)
    {
        printf("%d\n",icnt);
    }

    printf("Enter Number : \n");
    scanf("%d",&ivalue);

    return EXIT_SUCCESS;
}