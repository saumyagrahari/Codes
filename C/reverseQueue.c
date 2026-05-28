//reverse the queue code in C
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *front=NULL, *rear=NULL;

void enqueue(int x){
    Node* t=malloc(sizeof(Node));
    t->data=x; t->next=NULL;
    if(!rear) front=rear=t;
    else rear=rear->next=t;
}

int dequeue(){
    Node* t=front; int x=t->data;
    front=front->next; if(!front) rear=NULL;
    free(t); return x;
}

int isEmpty(){ return front==NULL; }

void reverse(){
    if(isEmpty()) return;
    int x=dequeue();
    reverse();
    enqueue(x);
}

void display(){
    for(Node* t=front;t;t=t->next) printf("%d ",t->data);
    printf("\n");
}

int main(){
    enqueue(1); enqueue(2); enqueue(3); enqueue(4);
    display();
    reverse();
    display();
    return 0;
}