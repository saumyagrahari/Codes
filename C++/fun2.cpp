#include<iostream>
using namespace std;
int digitSum(int x){
    int sum=0;
    while(x>0){
    int n=x%10;
    sum=sum+n;
    x=x/10;}
    return sum;
}
int main(){
    cout<<"Sum is "<<digitSum(7890)<<endl;
    return 0;
}