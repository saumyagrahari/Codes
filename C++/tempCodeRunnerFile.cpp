#include<iostream>
using namespace std;
int decBin(int decNum){
    int ans=0,pow=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum/=2;
        ans+=(rem*pow);
        pow*=10;
    }return ans;
}
int main(){
    cout<<"Binary will be "<<decBin(5)<<endl;
    return 0;
}