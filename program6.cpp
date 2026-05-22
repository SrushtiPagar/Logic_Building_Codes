/*
Algorithm
    Start   
        Accept 1st number as No1
        Accept 2nd number as No2
        Perform Addition of No1 and No2
        Display the result
    Stop
*/

#include<iostream>
using namespace std;

int main()
{
    //intialize variables with default values
    float i = 0.0f;
    float j = 0.0f;
    float k = 0.0f;

    cout<<"Enter First Number : \n";
    cin>>i;

    cout<<"Enter Second Number : \n";
    cin>>j;

    k = i+j;

    cout<<"Addition is : "<<k;

    return 0;
}