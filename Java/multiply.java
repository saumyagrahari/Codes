import java.util.Scanner;
public class multiply{
    private static void main(String[]){
        Scanner sa=new Scanner(System.in);
        System.out.println("Enter the numbers to be multiply:\n");
         int n1 = sa.nextInt();
        int n2 = sa.nextInt();
        int mul=n1*n2;
        System.out.println("Value of multiply is: "+mul);
        sa.close();
    }
}