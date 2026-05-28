#include<stdio.h>
#include<stdlib.h>
// creating struct 
// define
// create node
// insertion
// display
// searching
// delete(begining,end,position,value)
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
struct Node *createNode(int value){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
if(newNode==NULL){
    printf("Memory allocation failed.\n");
    exit(1);
}
newNode->data=value;
newNode->next=NULL;
return newNode;
}
void display(){
    if(head==NULL){
        printf("List is empty.\n");
    }
}
void insertAtBeginning(int value){
    struct Node*newNode=createNode(value);
    newNode->next=head;
    head=newNode;
}
void insertAtEnd(int value){
     struct Node*newNode=createNode(value);
     
}
struct Node *temp=head;



void insertAtPosition

if(position==1){
    insertAtBeginning(value);
    return;
}
struct Node *newNode=createNode(value);
struct Node *temp=head;
for (int i=1;i<position-1 && temp!=NULL;i++)
temp=temp->next;
if(temp==NULL){
    printf("Position out of range.\n");
    free(newNode);
    return;
}
struct Node *temp=head;
printf("Linked List");
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
newNode->next=temp->next;
temp->next=newNode;}
int count{



}

void search(int value){
    struct Node *temp=head;
    int pos=1;
    while(temp!=NULL){
        if(temp->data==value){
            printf("Found %d at position %d",value,pos);
            return;
        }temp=temp->next;
        pos++;
    }printf("Value %d does not found.\n",value)
}
void deleteFromBeginning(){
    if(head==NULL){
        printf("List is empty.Nothing to delete.\n");
        return;
    }
    struct Node *temp=head;
    head=head->next;
    printf("Deleted;%d.\n",temp->data);
    free(temp);
}
void deleteFromEnd(){
    if(head==NULL){
        printf("List is empty.Nothing to delete.\n");
        return;
    }if(head->next==NULL){
        printf("Deleted: %d\n",head->data);
        free(head);
        head=NULL;
        return;
    }
    struct Node *prev=NULL;
    struct Node *curr=head;
    while(curr->next !=NULL){
        prev=curr;
        curr=curr=>next;
    }prev->next=NULL;
    printf("Deleted:%d",curr->data);
    free(curr);
}
//reverse the linked list.(hw)