#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    n = 5;
    for(i=1;i<=n;i++){
        char ch='A';
        for(j=1;j<=i;j++){
            cout<<ch<<" ";
            ch = ch+1;
        }cout<<endl;    
    
    }
}