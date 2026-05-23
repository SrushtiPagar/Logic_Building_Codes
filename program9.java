import java.util.Scanner;

class program9 
{
    //there should not be input output in function
    //no user interaction in function
    float AddTwoNumbers (
                            float fNo1 ,                            // fisrt input
                            float fNo2                              // second input
                        )
    {
        float fAns = 0.0f;

        fAns = fNo1 +fNo2;                                           // perform addition

        return fAns;
    }
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        float fValue1 =0.0f , fValue2 = 0.0f , fResult = 0.0f;      // variable creation with default values

        System.out.println("Enter First Number : ");               // accept first number
        fValue1 = sobj.nextFloat();

        System.out.println("Enter Second Number : ");             // accept second number
        fValue2 = sobj.nextFloat();

        program9 pobj = new program9();                             // create object of class to call non static function

        fResult = pobj.AddTwoNumbers(fValue1 , fValue2);            // perform addition by calling function and storing result in fResult   

        System.out.println("Addition is : "+fResult);               //print the result

        sobj.close();
        
    }
}
