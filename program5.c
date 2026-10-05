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

int main()
{ 
     int ivalue1 = 0, ivalue2 = 0, iresult = 0;

     iresult = ivalue1 + ivalue2;
     
     printf("Enter first number :\n");
     scanf("%d",&ivalue1);

     printf("Enter second number :\n");
     scanf("%d",&ivalue2);

     iresult = ivalue1 + ivalue2;

     printf("Addition is : %d\n",iresult);

     return 0;
}