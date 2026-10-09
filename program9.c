#include<stdio.h>
#include<stdlib.h>

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


int Addition(
                int iNo1,                       //First number
                int iNo2                        //Second Number
            )
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

     return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////       
//     Step 5 : Test the program
//   
//     Tested Cases 
//
//     Input1        Input2         Output
//       10            11             21
//       11            0              11
//       0             11             11
//       20            -9             11
//      -9             20             11
//      -20           -11             31
//
//
////////////////////////////////////////////////////////////////////////  