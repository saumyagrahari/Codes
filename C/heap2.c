//find the kth smallest element in the min heap
#include<stdio.h>
void heapify(int arr[],int n,int i){
    int smallest =i;
    int left=2*i+1;
    int right=2*i+2;
    if (left<n&&arr[left]<arr[smallest])
    smallest=left;
    if (right<n&&arr[right]<arr[smallest])
    smallest=right;
    if(smallest!=i){
        int temp=arr[i];
        arr[i]=arr[smallest];
        arr[smallest]=temp;
        heapify(arr,n,smallest);
    }
}
void buildHeap(int arr[],int n){
    for(int i=(n/2)-1;i>=0;i--){
    heapify(arr,n,i);}
}
int extractMin(int arr[],int *n){
    int root=arr[0];
    arr[0]=arr[*n-1];
    (*n)--;
heapify(arr,*n,0);
return root;
}
int kthSmallest(int arr[], int n, int k){
    buildHeap(arr,n);
    for(int i=1;i<k;i++)
    extractMin(arr,&n);
    return arr[0];
}
int main(){
    int arr[]={7,10,4,3,20,15};
    int n=6;
    buildHeap(arr,n);{
    printf("Min heap: \n");}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");
        int k=5;
    printf("Kth smallest =%d\n",kthSmallest(arr,n,k));
    return 0;   
}