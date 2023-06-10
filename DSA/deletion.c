// Online C compiler to run C program online
#include <stdio.h>

#include <stdlib.h>
struct node {
    int data;
    struct node * next;

};
void linkedListTraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("the value is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
// case 1
 struct node* deletionAtFirst(struct node* head){
    // struct node *ptr=(struct node*)malloc(sizeof(struct node));
    // this is not required because the we just need tom free the space no need to create a heap
    struct node *ptr =head;
    head =head->next;
    free(ptr);
    return head;
    
    
}
struct node* deletionAtIndex(struct node* head, int index){
    struct node* p=head;
    struct node* q=head->next;
    for(int i=0; i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct node* deletionAtLast(struct node* head){
    struct node * p =head;
    struct node *q=head->next;
    while(q->next!=NULL){
    p=p->next;
    q=q->next;
}
p->next=NULL;
free(q);
return head;
}
struct node *DeletionAValue(struct node* head,int value){
    struct node*p=head;
    struct node*q=head->next;
    while(q->data!=value && q!=NULL){
    p=p->next;
    q=q->next;
}
if(q->data==value){
p->next=q->next;
}
free(q);
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
     third->next=NULL;
     DeletionAValue(head,8);
     linkedListTraversal(head);
     
    

    return 0;
}