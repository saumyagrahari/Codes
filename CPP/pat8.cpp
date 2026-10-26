#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    n=4;
    for(i=1;i<=n;i++){
        char ch='A'+i-1;
        for(j=1;j<=n;j++){
            cout<<ch<<" ";
        }
        ch=+1;
        cout<<"\n";
    }return 0;
}