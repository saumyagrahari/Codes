import java.util.Scanner;
public class BinaryNumber{
    public static void main(String[]args){
//        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.println("enter any num:");
    int num=sc.nextInt();
    String ans=" ";
    while(num!=0){
        int rem=num%2;
        num=num/2;
        ans=ans + rem;
    }
    System.out.println(ans);
}
}