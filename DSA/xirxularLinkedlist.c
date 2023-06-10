
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void linkedListTraversal(struct node* head){
    struct node* ptr=head;
    do{
        printf("Element are %d\n ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct node* insertion(struct node* head, int data){
    struct  node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node* p=head->next;
    while(p->next!=head){
        p=p->next;
        
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}



int main() {
    struct node* head;
    struct node* first;
    struct node* second;
    struct node* third;
     head= (struct node*)malloc(sizeof(struct node));
     first= (struct node*)malloc(sizeof(struct node));   
     second= (struct node*)malloc(sizeof(struct node));
     third= (struct node*)malloc(sizeof(struct node));
     head->data=7;
     head->next=first;
     
     
     
     first->data=8;
     first->next=second;
     
    second->data=15;
     second->next=third;
     
     third->data=18;
     third->next=head;
   
     head = insertion(head, 54);
    head = insertion(head, 58);
    head = insertion(head, 59);
    printf("Circular Linked list after insertion\n");
    linkedListTraversal(head);
     
    

    return 0;
}