#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i-j+1<<" ";
        }cout<<"\n";
    }return 0;
}