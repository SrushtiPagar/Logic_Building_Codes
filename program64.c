//Input  : 5
//Output : -5 -3 -1 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(int iCnt = -iNo ; iCnt <= iNo ; iCnt++)
    {
        printf("%d \t" , iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue  = 0;

    printf("Enter Number : ");
    scanf("%d" , &iValue);

    Display(iValue);
}

//Time Complexity : 2N
//Where N>=0;