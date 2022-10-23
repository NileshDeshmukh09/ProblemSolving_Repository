#include<iostream>
#include<stack>
using namespace std;

/** Reverse a String */

int main(){

    stack<char>st;

    string str ;
    cout << "Enter the String : ";
    cin >> str;
    for(int i = 0 ; i < str.length(); i++){
        st.push(str[i]);
    }

    string ans = "";

    while( !st.empty() ){
        ans.push_back(st.top());
        st.pop();
    }

    cout << "Answer Is : "<< ans << endl;

    return 0;
}