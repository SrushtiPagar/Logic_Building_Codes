#include<stdio.h>

int CheckEvenOdd(int iNo)
{
    int iReminder = 0;

    iReminder = iNo % 2;

    return iReminder;
}

int main()
{
    int iValue = 0;
    int iRet = 0;           //iret = integer return

    printf("Enter Number to Check whether it is Even or Odd: ");
    scanf("%d" , &iValue);

    iRet = CheckEvenOdd(iValue);

    //output should be descriptive
    if(iRet == 0)
    {
        printf("%d is Even \n",iValue);
    }
    else
    {
        printf("%d is Odd \n" , iValue);
    }

    return 0;
}