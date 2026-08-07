import java.util.Scanner;
public class MulNum {
    public static void main(String[]args){
        Scanner mul1=new Scanner(System.in);
        System.out.println("Enter n1 ");
        int c=mul1.nextInt();
        System.out.println("Enter n2 ");
        int d=mul1.nextInt();
        int mul=c*d;
        System.out.println("Enter multiplication "+mul);
        return;
    }
}
