// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr){
    while(ptr!=NULL){
    printf("value of the data is %d\n",ptr->data);
    ptr=ptr->next;
}
}


    
struct node * insertionAtfirst(struct node* head, int data ){
    struct node* ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
    
}
struct node *insertionAtIndex(struct node* head,int data,int index){
    struct node* ptr=(struct node *)malloc(sizeof(struct node));
    struct node* p=head;
    int i=0;
    while(i!=index-1){
        p =p->next;
        i++;
    }
    ptr->data= data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
    
}
struct node* insertionAtEnd(struct node *head ,struct node *previousNode,int data){
    struct node * ptr =(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->next!=NULL){
        p =p->next;
    }
    p->next =ptr;
    ptr->next=NULL;
    return head;
}
struct node* insertionAfterNode(struct node* head,struct node*previousNode,int data ){
    struct node* ptr =(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next = previousNode->next;
    previousNode->next =ptr;
    return head;
}
int main(){
    struct node* head;
    struct node* first;
    struct node* second;
    struct node* third;
    struct node* fourth;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=first;
    
    first->data=8;
    first->next=second;
    
    second->data = 15;
second->next = third;
    
    third->data = 41;
    third->next = fourth;
    
    fourth->data = 66;
    fourth->next = NULL;
    head =insertionAfterNode(head,third,45);
    linkedListTraversal(head);
    return 0;
}