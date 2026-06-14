//Type 1

import java.util.Scanner;

class program38
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter A number to check if it is divisible by 3 & 5 : ");
        iValue = sobj.nextInt();

        if((iValue % 3 == 0 ) && ( iValue % 5 == 0 ))
        {
            System.out.println("Number is Divisible by 3 and 5 ");
        }
        else
        {
            System.out.println("Number is NOT Divisible by 3 & 5");
        }

        sobj.close();
    }    
}
