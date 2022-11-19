#include<iostream>
using namespace std;

class Node {
   public: 
        int data ;
        Node* left;
        Node* right;

    Node( int val ){
        this-> data = val;
        this-> left = NULL;
        this-> right = NULL;    
    }
};

Node* buildTree( Node* root ){

    cout << "Enter the Data : ";
    int data;
    cin >> data;

    root = new Node( data );
    if( data == -1)return NULL;

    cout << "Enter data for Inserting in Left of "<< data << " : " << endl;
    root -> left = buildTree( root -> left );

    cout << "Enter data for Inserting in Right of "<< data << " : " << endl;
    root -> right = buildTree( root -> right );

    return root;
}
int main(){

    Node* root = NULL; 
    root = buildTree( root );
    
    
    return 0;
}

