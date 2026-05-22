import java.util.Scanner;

class program5 
{
    public static void main(String A[])
    {
        float i , j , k ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Fisrt Number :");
        i = sobj.nextFloat();

        System.out.println("Enter Second Number :");
        j = sobj.nextFloat();

        k = i + j;

        System.out.println("Addition is : "+k);

        sobj.close();
    }    
}
