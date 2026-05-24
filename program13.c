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

    printf("Enter Number : \n");
    scanf("%d" , &iValue);

    iRet = CheckEvenOdd(iValue);

    if(iRet == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}