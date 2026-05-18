/*
Algorithm
    Start   
        Accept 1st number as No1
        Accept 2nd number as No2
        Perform Addition of No1 and No2
        Display the result
    Stop
*/

#include<stdio.h>       //input output header file

int main()
{
    float i , j , k;      //local variable

    printf("Enter first number \n");    //display on console
    scanf( "%f" , &i);                  //take input from user

    printf("Enter second number \n");
    scanf( "%f" , &j);

    k = i+j;    //business logic
    // + is assignment operator
    // = is equal operator

    printf("Addition is : %f \n", k );

    return 0;
}