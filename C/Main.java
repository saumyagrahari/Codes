public class Main{
    public static int findMinSubArray(int[] a,int k){
        int windowSum=0,minLength=Integer.MAX_VALUE;
        int windowStart=0;
        for(int windowEnd=0;windowEnd<a.length;windowEnd++){
            windowSum+=a[windowEnd];
            while(windowSum>=k){
                minLength=Math.min(minLength,windowEnd-windowStart+1);
                windowSum-=a[windowStart];
                windowStart++;
            }
        }return minLength==Integer.MAX_VALUE ? 0:minLength;
    } public static void main(String[]args){
        int[]a1={3,4,3,4,5,8};
        System.out.println("Smallest sub array length: "+findMinSubArray(a1,10));
    }
}