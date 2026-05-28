// import java.util.Scanner ;
class targetsum{
    @SuppressWarnings("unused")
    public static void main(String[]args){
        int arr[]={2,6,12,6,16};
        int target[]={8,12,18,22,30,20};
        for(int t=0;t<target.length;t++){
            int tar=target[t];
            for (int i=0;i<arr.length-1;i++){
                for(int j=i+1;j<=arr.length; j++){
                    if(arr[i]+arr[j]==tar){
                        System.out.println(tar+"");
                    }break;
                }
            }
        }
    }
}