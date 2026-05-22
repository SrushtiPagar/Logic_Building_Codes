import java.util.Scanner;

class program4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int i , j, k;

        System.out.println("Enter First number :");
        i = sobj.nextInt();

        System.out.println("Enter Second number :");
        j = sobj.nextInt();

        k = i + j;

        System.out.println("Addition is :"+k);

        sobj.close();       //plz write this mandatory line to avoid memory leak
    }
}