#include<bits/stdc++.h>
using namespace std;


Node* postOrderIterative( Node* root ){

    stack<int> st1;
    stack<int> st2;

    while( root-> left == NULL && root -> right == NULL  ){
        st1.push( root -> left );
        st1.push( root -> right );

        int val = st1.top();
        st1.pop();

        st2.push( val );
    }

}