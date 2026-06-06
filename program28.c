#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(int iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("Jay Ganesh...\n");      //I dont want this printf here I will try at home
    }
}

int main()
{
    
    int iValue = 0;

    printf("Enter the Frequency : ");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0;
}