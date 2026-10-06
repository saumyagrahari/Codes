#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
    int i,prev;
    for(i=1;i<=n;i++){
        int curr=arr[i];
        prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }arr[prev+1]=curr;
    }
}
void displayArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    displayArray(arr, n);
    return 0;
}