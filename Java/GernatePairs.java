public class GernatePairs {
    public static void main(String[] args){
        int [] array={10,20,5,13,11};
          int n=array.length;
          for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                System.out.println("("+array[i]+","+array[j]+")");
            }
          }  
        }
}
