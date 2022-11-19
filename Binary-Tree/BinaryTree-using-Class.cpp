#include <iostream>
#include <queue>
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
int main()
{

    Node *root = NULL;
    root = buildTree(root);
    cout << "Level order Traversal of data : "<< endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    levelOrderTraversal(root);

    return 0;
}
