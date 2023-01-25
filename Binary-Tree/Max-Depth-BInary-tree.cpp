#include<bits/stdc++.h>
using namespace std;

class TreeNode {
    
    public : 
        TreeNode* left;
        TreeNode* right;
};

class Solution {
    public :

        // Recursive Approach , can be done with level order traversal also
        int maxDepth( TreeNode* root ){

            if( root == NULL ) return 0;

            int lh = maxDepth( root -> left );
            int rh = maxDepth( root -> right );

            return 1 + max( lh , rh );
        }
}