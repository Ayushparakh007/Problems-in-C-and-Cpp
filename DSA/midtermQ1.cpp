#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node{
    int value;
    struct node* left;
    struct node* right;
};
struct node* createnode(int data){
    struct node* root;
    root=(struct node*)malloc(sizeof(struct node));
    root->value=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}
struct  node* insert(struct node* root,int value){
    if(root ==NULL){
        return createnode(value);
    }
    if(value<root->value){
        root->left=insert(root->left,value); 
    }
    else if(value>root->value){
        root->right=insert(root->right,value);
    }
    return root;
}

int isprime(int a){
    if(a<=0){
        return 0;
    }
    for(int i=2;i<sqrt(a);i++){
        if(a % i==0){
            return 0;
        }
        return 1;

    }
}
struct node* deletion(struct node* root);

