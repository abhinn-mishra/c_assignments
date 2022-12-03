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

void inOrder(struct Node *node) {
    if(node == NULL) {
        return;
    }
    inOrder(node->left);
    printf(" %d ",node->data);
    inOrder(node->right);
}

void preOrder(struct Node *node) {
    if(node == NULL) {
        return;
    }

    printf(" %d ",node->data);
    preOrder(node->left);
    preOrder(node->right);
}

void postOrder(struct Node *node) {
    if(node == NULL) {
        return;
    }
    postOrder(node->left);
    postOrder(node->right);
    printf(" %d ",node->data);
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
   
   struct Node *node4 = addNodeToLeft(node2,4);
   
   printf("\nRoot Node %d",root->data);
   printf("\nLeft Node %d",node2->data);
   printf("\nRight Node %d",node3->data);
   printf("\nLeaf Node %d",node4->data);

   printf("\n Inorder Traversal \n");
   inOrder(root);

   printf("\n preOrder Traversal \n");
   preOrder(root);

   printf("\n postOrder Traversal \n");
   postOrder(root);

}

// In Order -- Left Root Right
// 4 10 12 15 18 22 24 25 31 35 44 50 66 70 90

//  Pre Order --  Root Left Right
// 25 15 10 4 12 22 18 24 50 35 31 44 70 66 90


// Post Order -- Left Right Root
// 4 12 10 18 24 22 15 31 44 35 66 90 70 50 25


// Post Order -- Left Right Root
// 4 12 10 18 24 22 15 31 44 35 66 90 70 50 25