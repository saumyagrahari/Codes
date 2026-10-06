#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                j=smallestIdx;
            }
        }swap(arr[i],arr[smallestIdx]);
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
    selectionSort(arr, n);
    displayArray(arr, n);
    return 0;
}