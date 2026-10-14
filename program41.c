#include<stdio.h>
#include<stdlib.h>

int Maximum(int iNo1, int iNo2)
{
    
    if(iNo1 > iNo2)
    {
        printf("Maximum is :%d\n",iNo2);
    }
    else
    {
        printf("Maximum is :%d\n",iNo1);
    }

}
int main()
{
    int ivalue1 = 0, ivalue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    scanf("%d",&ivalue1);

    printf("Enter second number : \n");
    scanf("%d",&ivalue2);

    Maximum(ivalue1, ivalue2);

    return EXIT_SUCCESS;
}