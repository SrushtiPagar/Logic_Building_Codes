/*
    START
        Accept number as No
        If No is completely divisibal by 2  (divide and check the number)
            then print Even
        otherwise
            print Odd
    STOP


     START
        Accept number as No
        Divide No by 2 
        If remainder is 0
            then print Even
        otherwise
            print Odd
    STOP

    if u divide any number by n then reminder will be 0 to n-1
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iReminder = 0;

    printf("Enter Number : \n");
    scanf("%d" , &iValue);

    iReminder = iValue % 2;

    if(iReminder == 0)              //== comparison operator (compare 2 numbers)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is Odd \n");
    }

    return 0;
}