#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
        int val ;
        int left;
        int right ;

        TreeNode(int data){
            this-> val = data;
            this -> left = 2;
            this -> right = 3;
        }
};

class Solution{
    public:
        vector<int>preInPostTraversal( TreeNode* root ){
            stack<pair<TreeNode* , int >> st;
            st.push({ root ,1 });
            vector<int> pre, in , post ;
            if( root == NULL ) return ;

            while( !st.empty() ){

                auto it = st.top();
                st.pop();

                //this is the part of preIncrement 1 to 2
                // push the left side of the tree
                if( it.second == 1 ){
                    pre.push_back( it.first-> val );
                    it.second++;
                    st.push( it );

                    if( it.first->left != NULL ){
                        st.push({it.first->left , 1});
                    }

                }
                // this is the part of inIncrement 2 to 3 
                // push Right 
                else if( it.second == 2 ){
                    in.push_back( it.first-> val);
                    it.second++;
                    st.push(it);

                    if( it.first->right != NULL ){
                        st.push({ it.first -> val ,1 });
                    }
                }
                // Don't push it back again
                else {
                    post.push_back( it.first->val);
                }
            }
        }
};