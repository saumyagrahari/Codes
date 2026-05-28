// implement queue using linked list
#include<stdio.h>
#include<stdlib.h>
 struct Node{
    int data;
    struct Node* next;
};
struct Node *front=NULL, *rear=NULL;
void enqueue(int x){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=x;
  newNode->next=NULL;
  if(rear==NULL){
    if(rear==NULL){
        front=rear=newNode;
        return;
    }
    rear->next=newNode;
    rear=newNode;
  }
}
void dequeue(){
    if(front==NULL){
        printf("Queue is Empty.\n");
        return ;
    }
    struct Node* temp=front;
    printf("Deleted:%d\n",temp->data);
    front=front->next;
    if(front==NULL)rear=NULL;
    free(temp);
}