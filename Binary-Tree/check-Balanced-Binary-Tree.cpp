#include<bits/stdc++.h>
using namespace std;

// Check for the Balanced Binary tree  what we check is if the difference between]
// the left BT and Right BT is greater than 1 , then is not a Balanced Binary Tree.

class TreeNode {
    
    public : 
        TreeNode* left;
        TreeNode* right;
};

class Solution{
    public:
        
        bool isBalanced( TreeNode* root ){
            return dfsHeight( root ) != -1 ;
        }

        int dfsHeight( TreeNode* root ){

            if( root == NULL ) return 0;

            int leftHeight = dfsHeight( root -> left );
            if( leftHeight = -1 ) return -1;

            int rightHeight = dfsHeight( root -> right );
            if( rightHeight = -1 ) return -1;

            if( abs( leftHeight - rightHeight) > -1) return -1;
            return max( leftHeight , rightHeight ) + 1 ;
         }
};