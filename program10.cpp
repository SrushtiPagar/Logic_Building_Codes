////////////////////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Function name : AddTwoNumbers
//  Input :         float, float
//  Output :        float
//  Description :   Performs Addition of 2 floats
//  language :      C++
//  Date :          09/05/2026
//  Author :        Srushti Nitin Pagar
//
////////////////////////////////////////////////////////////////////////////////////////////

float AddTwoNumbers(
                        float fNo1 ,            // To accept 1st number as No1
                        float fNo2              // To accept 2nd number as No2
                    )
{
    float fAns = 0.0f;                          // To store the result of Addition of No1 and No2

    fAns = fNo1 + fNo2;                         // Perform Addition of No1 and No2

    return fAns;                                // Return the result to the caller
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application to Perform Addition of 2 float values
//
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f;                           // To store 1st input
    float fValue2 = 0.0f;                           // To store 2nd input
    float fResult = 0.0f;                           // To store the Result

    cout<<"Enter First Number :";                   // Accept 1st number as No1
    cin>>fValue1;

    cout<<"Enter Second Number :";                  // Accept 2nd number as No2
    cin>>fValue2;

    fResult = AddTwoNumbers(fValue1 , fValue2);      // Perform Addition of No1 and No2

    cout<<"Addition is : "<<fResult;                // Display the result

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//  input :     10.0     11.0
//  Output :    21.0
//
////////////////////////////////////////////////////////////////////////////////////////////