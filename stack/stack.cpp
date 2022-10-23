#include<iostream>
#include<stack>
using namespace std;

class Stack{

    // Properties
    public:
        int *arr;
        int top;
        int size;

    // Behaviour

    Stack( int size ){
        this -> size = size;
        arr = new int [size];
        top = -1;
    }

    void push ( int element ){
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }else {
            cout << "Stack Overflow" << endl;
        }

    }

    bool isEmpty(){
        return top == -1;
    }

    void pop(){
        if( top >= 0 ){
            top-- ;
        }else{
            cout << "Stack Underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0 ){
            return arr[top];
        }else{
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }


    
};

int main(){

    Stack st(5);

    st.push(32);
    st.push(43);
    st.push(24);
    st.push(67);
    st.push(89);

    cout << st.peek() << endl;

    st.pop();
    st.pop();
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    st.pop();
    cout << st.peek() << endl;
    return 0; 
}