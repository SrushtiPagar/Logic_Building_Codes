#include<stdio.h>

//there should not be input output in function
//no user interaction in function
float AddTwoNumber  (
                        float fNo1 ,         //first input
                        float fNo2          //second input
                    )
{
    float fAns =0.0f ;                      // Variable to store result

    fAns = fNo1 + fNo2 ;                    //perform addition

    return fAns;
}

int main()
{
    float fValue1 = 0.0f;                   // To store 1st input
    float fValue2 = 0.0f ;                  // To store 2nd input
    float fResult = 0.0f;                   // To store the Result

    printf("Enter First number : \n");
    scanf(" %f ", &fValue1);

    printf("Enter Second number  : \n");
    scanf("%f" , &fValue2);

    fResult = AddTwoNumber(fValue1 , fValue2) ;       //Perform the Addition

    printf("Addition is : %f \n" , fResult);

    return 0;
}