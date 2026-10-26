#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    n=4;
    for(i=1;i<=n;i++){
        int val=i;
        for(j=1;j<=i;j++){
            cout<<val<<" ";
            val+=1;
        }cout<<"\n";
    }
    for(i=1;i<=n;i++){
    int res=i;
    for(j=1;j<=i;j++){
        cout<<res<<"*"<<" ";
        res+=1;
    }cout<<endl;
    }
    return 0;
}