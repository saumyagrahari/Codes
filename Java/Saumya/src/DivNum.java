import java.util.Scanner;
public class DivNum {
    public static void main(String[]args){
        Scanner s1=new Scanner(System.in);
        System.out.println("Enter dividend ");
        int a=s1.nextInt();
        System.out.println("enter divisor ");
        int b=s1.nextInt();
        int c=a/b;
        int r;
      System.out.println("Quotient "+c);
//        a=b*c+r;
        r=a-(b*c);
        System.out.println("Reminder "+r);
        return;
    }
}