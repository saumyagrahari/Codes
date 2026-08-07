#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++)
            cout<<" ";
            for(k=i;k<=n;k++)
            cout<<"* ";
            cout<<endl;
    }return 0;
}