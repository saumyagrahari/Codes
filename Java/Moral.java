import java.util.Scanner;

public class Moral {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    // P and F should be capital in pass and fail
    
    System.out.println("You are Pass or Fail in Examination");
    String value = sc.next();
     if (value.equals("Pass")) {
      System.out.println("Education is key to Success");
    } else  if (value.equals("Fail")) {
      System.out.println("A single sheet of paper cannot decide your future");
    } else {
      System.out.println("Wrong Input");
    }
  }
}