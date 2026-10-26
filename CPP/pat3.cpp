#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    n=4;
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            cout<<j<<" ";
        }cout<<"\n";
    }return 0;
}