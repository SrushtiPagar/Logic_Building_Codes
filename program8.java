import java.util.Scanner;

class program8 
{
    float AddTwoNumbers(float fNo1 , float fNo2)
    {
        float fAns = 0.0f;

        fAns = fNo1 +fNo2;

        return fAns;
    }
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        float fValue1 =0.0f , fValue2 = 0.0f , fResult = 0.0f;

        System.out.println("Enter First Number : ");
        fValue1 = sobj.nextFloat();

        System.out.println("Enter Second Number : ");
        fValue2 = sobj.nextFloat();

        program8 pobj = new program8();

        fResult = pobj.AddTwoNumbers(fValue1 , fValue2);

        System.out.println("Addition is : "+fResult);

        sobj.close();
        
    }
}
