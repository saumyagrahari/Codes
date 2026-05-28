import java.util.Scanner;

public class merg_sort {
    public static void divideHelper(int arr[], int left, int right) {
        if (left < right) {
            for (int i = left; i <= right; i++) {
                System.out.print(arr[i]);
            }
            System.out.println();
            int mid = (left + right) / 2;
            divideHelper(arr, left, mid);
            divideHelper(arr, mid + 1, right);
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("x: enter the size of array");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("x: enter element in array");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int left = 0, right = arr.length - 1;
        divideHelper(arr, left, right);
    }
}