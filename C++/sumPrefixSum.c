#include<stdio.h>
int main(){
    int n;
    scanf("%d",&)
    int arr[50];
    int prefix[50];
    // input
    // prefix
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    prefix[0]=0;
    for(int i=0;i<n;i++){
    prefix[i]=prefix[i-1]+arr[i-1];
    }int l,r;
    cin>>l>>r;
    int sum=prefix[r]-prefix[l-1];
    cout<<sum;
}