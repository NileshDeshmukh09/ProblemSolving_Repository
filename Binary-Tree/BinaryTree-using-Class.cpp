#include <iostream>
#include <queue>
#include <stack>
#include<vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{

    cout << "Enter the Data : ";
    int data;
    cin >> data;

    root = new Node(data);
    if (data == -1)
        return NULL;

    cout << "Enter data for Inserting in Left of " << data << " : " << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for Inserting in Right of " << data << " : " << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node *root)
{

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop(); 

        // purane level complete traverse ho chuke hai
        if (temp == NULL){

            cout << endl;
            // queue still has some child nodes

            if (!q.empty()){
                q.push(NULL);
            }
            
        }else{
            cout << temp -> data << " ";
 
            if( temp -> left )q.push( temp -> left );
            if( temp -> right )q.push( temp -> right );
        }
    }
};

vector<int> iterativePreorder( Node* root ){

   vector<int>preOrder;
    if( root == NULL )
        return preOrder;
    
    stack<Node*> st;
    st.push( root );

    while( !st.empty() ){
        root = st.top();
        st.pop();

        preOrder.push_back( root -> data );
        if( root -> right != NULL ) st.push( root -> right );
        if( root -> left != NULL) st.push( root -> left );

    }
    return preOrder;

}


int main()
{

    Node *root = NULL;
    root = buildTree(root);
    cout << "Level order Traversal of data : "<< endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    levelOrderTraversal(root);

     vector<int>preOrder;
     vector<int>ans;

     ans =  iterativePreorder( root );

    for( int i= 0 ; i< ans.size() ; i++ ){
        cout << ans[i]<< " ";
    }
    

    return 0;
}
