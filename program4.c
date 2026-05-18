#include<stdio.h>       //input output header file

int main()
{
    int i , j , k;      //local variable

    printf("Enter first number \n");    //display on console
    scanf( "%d" , &i);                  //take input from user

    printf("Enter second number \n");
    scanf( "%d" , &j);

    k = i+j;    //business logic
    // + is assignment operator
    // = is equal operator

    printf("Addition is : %d \n", k );

    return 0;
}