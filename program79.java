import java.util.Scanner;

class DigitX
{
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10 ;
        }

        // for(iCnt = iNo ; iCnt <iNo.length() ; iCnt++ )
        // {
        //     iDigit = iNo % 10;
        //     System.out.println(iDigit);
        //     iNo = iNo /10;
        // }
    }
}

class program79
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        dobj.DisplayDigits(iValue);

        sobj.close();
    }
}


/*
    iDigit = 0;

    while(iNo > 0)
    iDigit = iNo % 10;
    print iDigit;
    iNo = iNo /10;

    for(i = iNo ; i <iNo.length ; i++ )
    {
        iDigit = iNo % 10;
        print iDigit;
        iNo = iNo /10;
    }
*/