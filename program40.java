//Type 2

import java.util.Scanner;

class program40
{
    void CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0 ) && ( iNo % 5 == 0 ))
        {
            System.out.println("Number is Divisible by 3 and 5 ");
        }
        else
        {
            System.out.println("Number is NOT Divisible by 3 & 5");
        }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter A number to check if it is divisible by 3 & 5 : ");
        iValue = sobj.nextInt();

        CheckDivisible(iValue);         //Error
        //non-static method CheckDivisible(int) cannot be referenced from a static context
        //CheckDivisible(iValue);
        //^

        sobj.close();
    }    
}
