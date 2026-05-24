#include<stdio.h>
#include<stdbool.h>         //for boolean datatype because c do not have boolean datatype

//check whether = boolean value

bool CheckEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;           //iret = integer return

    printf("Enter Number to Check whether it is Even or Odd: ");
    scanf("%d" , &iValue);

    bRet = CheckEvenOdd(iValue);

    //output should be descriptive
    if(bRet == true)
    {
        printf("%d is Even \n",iValue);
    }
    else
    {
        printf("%d is Odd \n" , iValue);
    }

    return 0;
}