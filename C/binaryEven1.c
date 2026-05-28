// wrong:::::::
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    // even number of 1 in binary numbers 
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
    // int num=i;
    int count =0;
        int ans=0;
    while(num!=0){
     int rem=num%2;
     if(rem==1){
        count++;
     }
        num=num/2;
        ans = rem+ans;
    }
    if(count%2==0){
        printf("ans:",ans);
    }
}
return 0;
}