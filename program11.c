/*
  Algorithm  

  START
       Accept first number as No1
       Accept Second number as No2
       if the input is negative then convert it into positive
       perform Addition of No1 & No2
       Display the Addition on Screen
  STOP
*/

///////////////////////////////////////////////////////////////////
//
//  Required Header files
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is use to perform Addition
//  Input :         Float , Float
//  Output :        Float
//  Author :        Priyanka Ashokrao Vale
//  Date :          09/10/2025
//
//////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,                  // first input
                            float fNo2                   // Second input
                        )                                        
{
    float fSum=0.0f;                                     // Two store the result

    if(fNo1 < 0.0f)                                      // Updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                      // Updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                                 //Business logic

    return fSum;
}   // End of AdditionTwoNumbers

//////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2= 0.0f;                // To accept user input  
    fRet = 0.0f;                                        // To store the result

    printf("Enter First number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second number :\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);        // Method call

    printf("Addition is :%f\n",fRet);

    return 0;
}   //End of main

//////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handled by the application
//
//  Input 1 : 10.5        Input 2 : 3.2     Input 3 : 13.7
//  Input 1 : -10.5        Input 2 : 3.2     Input 3 : 13.7
//  Input 1 : 10.5        Input 2 : -3.2     Input 3 : 13.7
//  Input 1 : -10.5        Input 2 : -3.2     Input 3 : 13.7
//  Input 1 : 10.5        Input 2 : 0.0     Input 3 : 10.5
//
//////////////////////////////////////////////////////////////////