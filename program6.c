/*
Algorithm
    Start   
        Accept 1st number as No1
        Accept 2nd number as No2
        Perform Addition of No1 and No2
        Display the result
    Stop
*/

#include<stdio.h>

int main()
{
    // Variable creation with default values
    float No1 = 0.0f;
    float No2 = 0.0f , Result = 0.0f;

    printf("Enter First number : \n");
    scanf(" %f ", &No1);

    printf("Enter Second number  : \n");
    scanf("%f" , &No2);

    Result = No1 + No2 ;

    printf("Addition is : %f \n" , Result);

    return 0;
}