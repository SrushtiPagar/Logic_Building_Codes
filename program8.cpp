#include<iostream>
using namespace std;

float AddTwoNumbers(float fNo1 , float fNo2)
{
    float fAns = 0.0f;

    fAns = fNo1 + fNo2;

    return fAns;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    float fResult = 0.0f;

    cout<<"Enter First Number :";
    cin>>fValue1;

    cout<<"Enter Second Number :";
    cin>>fValue2;

    fResult = AddTwoNumbers(fValue1 , fValue2);

    cout<<"Addition is : "<<fResult;

    return 0;
}