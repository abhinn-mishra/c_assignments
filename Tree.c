// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} *root;

struct Node* createNode() {
    struct Node *tmp = (struct Node *)malloc(sizeof(struct Node));
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

struct Node* addNodeToRight(struct Node *node,int data) {
    struct Node *rightNode = createNode();
    rightNode->data = data;
    node->right = rightNode;
    return rightNode;
}

struct Node* addNodeToLeft(struct Node *node,int data) {
    struct Node *leftNode = createNode();
    leftNode->data = data;
    node->left = leftNode;
    return leftNode;
}

void main() {
    
    /*
    
    1 --- root
    /\
    /\
    2 3
    \
    \
     4
    
    */
    
   root = createNode(); 
   root->data = 1;
   struct Node *node2 = addNodeToLeft(root,2);
   struct Node *node3 = addNodeToRight(root,3);
   
   struct Node *node4 = addNodeToRight(node2,4);
   
   printf("\nRoot Node %d",root->data);
   printf("\nLeft Node %d",node2->data);
   printf("\nRight Node %d",node3->data);
   printf("\nLeaf Node %d",node4->data);

}
