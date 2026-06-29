//Input  : 5
//Output : 1 3 5 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(int iCnt = 1 ; iCnt <= iNo ; iCnt= iCnt+2)       //iCnt+=2
    {
        printf("%d \t" , iCnt);
        //iCnt++;
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

// 2nd Approach
// for(int iCnt = 1 ; iCnt < iNo ; iCnt++)
//     {
//         printf("%d \t" , iCnt);
//         iCnt++;
//     }