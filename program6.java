import java.util.Scanner;

class program6 
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        //intialize variables with default values
        float i = 0.0f;
        float j = 0.0f;
        float k = 0.0f;

        System.out.println("Enter First Number : ");
        i = sobj.nextFloat();

        System.out.println("Enter Second Number : ");
        j = sobj.nextFloat();

        k = i + j;

        System.out.println("Addition is : "+k);

        sobj.close();
    }    
}
