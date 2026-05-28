#include<iostream>
using namespace std;
// sum
float Sum(float a,float b){
    float s=a+b;
    return s;
}
// min
float Min(float a, float b){
    float m=a<b?a:b;
    return m;
}
int main(){
   cout<<"Sum is: "<<Sum(10,5.980)<<endl;
   cout<<"Minimum value is: "<<Min(1009,-8.098);
   return 0;
}