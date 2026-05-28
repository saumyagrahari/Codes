#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }return f;
}
int nCr(int n, int r){
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nMr=fact(n-r);
    return fact_n / (fact_r * fact_nMr);
}
int main(){
    int n=6,r=3;
    cout<<"Binomial is "<<nCr(n,r)<<endl;
    return 0;
}