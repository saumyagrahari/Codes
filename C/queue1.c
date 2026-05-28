// queue
#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1, rear=-1;
void enqueue(int x){
    if(rear==SIZE-1){
        printf("Overflow\n");
        return;
    }
    if(front==-1)front =0;
    queue[++rear]=x;
}
void dequeue(){
    if(front==-1 ||front>rear){
        printf("nderflow.\n");
        return;
    }
    printf("Deleted:\n");
    printf("%d\n",queue[front++]);
}
void display(){
    printf("Remained queue elements:\n");
    for(int i=front;i<=rear;i++)
    printf("%d ",queue[i]);
    printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    display();
}