/*
    step 1 :   Understand the problem statement
    step 2 :   write the algorithm
    step 3 :   decide the programming language
    step 4 :   write the program
    step 5 :   test the program

*/

////////////////////////////////////////////////////////////////////////
//
//  step 1 :   Understand the problem statement
//              user is going to enter any two integers and we have to
//              perform addition
//
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////   
//  step 2 :   write the algorithm
/*
     START
           Accept first number as No1
           Accept first number as No2
           Create the variable as Ans to store the result
           Perform addition to store the Ans
           Display the result from Ans
     STOP 
*/     
////////////////////////////////////////////////////////////////////////       

////////////////////////////////////////////////////////////////////////   
//
//   step 3 :   decide the programming language           
//
////////////////////////////////////////////////////////////////////////       

////////////////////////////////////////////////////////////////////////       
//
//  step 4 :   write the program
//
////////////////////////////////////////////////////////////////////////       


#include<stdio.h>

////////////////////////////////////////////////////////////////////////       
//
//  Function name :  Addition
//  Input         :  Integer, Integer
//  Output        :  Integer
//  Description   :  Performs Addition
//  Date          :  04/10/2026
//  Author        :  Gayatri Prashant Dhole
//
////////////////////////////////////////////////////////////////////////       


int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;                         //Business Logic

    return iAns;
}

////////////////////////////////////////////////////////////////////////       
//
//   Entry point of the application
//
//
////////////////////////////////////////////////////////////////////////       


int main()
{ 
     int ivalue1 = 0, ivalue2 = 0, iresult = 0;

     iresult = ivalue1 + ivalue2;
     
     printf("Enter first number :\n");
     scanf("%d",&ivalue1);

     printf("Enter second number :\n");
     scanf("%d",&ivalue2);

     iresult = Addition(ivalue1, ivalue2);

     printf("Addition is : %d\n",iresult);

     return 0;
}