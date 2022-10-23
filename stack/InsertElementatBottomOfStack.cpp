#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>&st , int X){

    //Base Case
    if( st.empty() ){
        st.push(X);
        return;
    }

    int num = st.top();
    st.pop();

    // Recursive Call
    solve( st , X);
    st.push( num );

};

stack<int>pushAtBottom(  stack<int>&myStack , int M){
    solve( myStack, M);
    cout << "InStack "<< M << endl;
    return myStack;
}

int main()
{

    int T;
    cout << "TestCases : ";
    cin >> T;

    while (T--)
    {
        int N, M;

        cout << "Enter size : ";
        cin >> N;

        cout << "Enter Key : ";
        cin >> M;

        stack<int>myStack;
        int cnt = 0;

        cout << "Stack Element : " << endl ;
        
        while( cnt != N ){
            int num;
            cout << "Val :";
            cin >> num;
            cnt++;
            myStack.push( num );
        };

        pushAtBottom( myStack , M);
        
        cout << "Output : ";
        while( !myStack.empty()){
            cout << myStack.top()<< endl;
            myStack.pop();
        }

    }

    return 0;
}