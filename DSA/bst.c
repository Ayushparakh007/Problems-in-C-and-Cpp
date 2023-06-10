#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
// this is done to create a node in the structure
struct node* createNode(int data){
    struct node *p;
    p=(struct node *)mallloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p; 
}
//To Know whether the code is bst or not
int bst(struct node* root){
    static struct node* prev=NULL;
    if(root!=NULL){
        if(!bst(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data<= prev->data){
            return 0;
        }
        prev=root;
        return bst(root->right);
    }
    else{
        return 1;
    }

}
struct node* search(struct node* root,int key){
    if(root==NULL){
        return NULL;

    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left,key);
    }
      else{
        return search(root->right,key);
    }
}
struct node *search2(struct node*root,int key){
    while(root!=NULL){
        if(root->data==key){
            return root;
        }
        else if(key<root->data){
            root=root->left;
        }
        else {
            root = root->right;
        }
    }
    return NULL;
}


insetion(struct node* root,int key){
    struct nodee * prev=NULL;
    while(root!=NULL){
        prev=root;
    }
    if(root->data==key){
        printf("Element of same vlaue found",key);
        return;
    }
    else if(key<root->data){
        root = root->left;
    }
     else {
        root = root->right;
    }
    struct node *p=createNode(key);
    if(key<root->data){
        root = root->left;
    }
     else {
        root = root->right;
    }
}
struct node* deletion(struct node* root,int value){
    struct node* ptr;
    if(root==NULL){
        return NULL;
    }
    if(root->left=NULL,root->right=NULL){
        free(root);
        return NULL;
    }
    if(value<root->data){
        deletion(root->left,value);
    }
    else if(value>root->data){
        deletion(root->right,value);
    }
    else{
        ptr=inorderPrecess(root);
        root->data=ptr->data;
        root->left=deletion(root->left,ptr->data);
    }
}

struct node* inorderprecess(struct node* root){
    root=root->left;
    while(root->right!=NULL){
        root =root->left;
    }
    return root;
}
int main(){

struct node *p=createNode(5);
struct node *p1=createNode(4);
struct node *p2=createNode(5);
struct node *p3=createNode(4);
struct node *p5=createNode(6);
p->left=p1;

struct node*n =search2(p,6);
if(n!=NULL){
    printf("'found",n->data);
}
else{
    printf("Element not found ");
}
}
