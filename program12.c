#include<stdio.h>

//check whether = yes or no

void CheckEvenOdd(int iNo)
{
    int iReminder = 0;

    iReminder = iNo % 2;

    if(iReminder == 0)              //== comparison operator (compare 2 numbers)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is Odd \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d" , &iValue);

    CheckEvenOdd(iValue);

    return 0;
}