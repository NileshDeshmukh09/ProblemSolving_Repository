#include<iostream>
using namespace std;

struct Node 
{
    /* data */
    int data ;
    struct Node* left;
    struct Node* right;

};
  
Node* newNode( int val ){

    Node* temp = new Node;
    temp-> data = val;
    temp-> left = temp-> right = NULL;
    return temp;
}

// void printTreee( struct Node* root ){

//     while( root-> left  != NULL && root->right != NULL){
//         cout << root -> data ;
//         printTreee( root -> left);
//         printTreee( root -> right );
//     }
// }

void preOrder( Node* root ){
    if( root  == NULL) return;

    cout << root -> data << " ";
    preOrder( root -> left);
    preOrder( root -> right );
}

int main(){

    struct Node* root =  newNode(10);
    root-> left =  newNode(1);
    root-> right =  newNode(2);
    root-> left -> left =  newNode(3);
    root-> left ->right =  newNode(4);

    preOrder( root );
    
    return 0;
}

