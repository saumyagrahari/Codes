import java.util.Scanner;
public class sum{
    public static void main(String[]args){
        Scanner sa=new Scanner(System.in);
        System.out.println("Enter the numbers to be added:\n");
        int num1 = sa.nextInt();
        // System.out.println("Enter the number to be added:\n");
        int num2 = sa.nextInt();
        int sum=num1+num2;
        System.out.println("Sum of two number "+num1 + " and "+num2 +" are: " +sum);
        sa.close();
    }
}