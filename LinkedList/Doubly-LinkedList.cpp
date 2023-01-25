#include<bits/stdc++.h>
using namespace std;

class Node{
    public : 
        int data ;
        Node* next;
        Node* prev;

    Node( int data ){
        this -> data = data ;
        this -> next = NULL ;
        this -> prev = NULL ;
    }

    ~Node(){
        int value = this -> data ;

        if( next != NULL ){
            delete next;
            next = NULL ;
        }

        cout << "Memory free for Node with Data "<< value << endl;
    }

};


// Insert at the beginning 
void InsertAtHead( Node*&head ,Node* & tail ,  int data ){

    Node* temp = new Node( data );
    if( head == NULL ){
        head = temp;
        tail = temp;
    }else{
        temp -> next = head ;
        head -> prev = temp ;
        head = temp;
    }
}


// Insert at the end
void InsertAtTail( Node*&head ,Node* & tail ,  int data ){
    
    Node* temp = new Node( data );
    if( tail == NULL ){
        head = temp;
        tail = temp;
    }else{

        tail->next = temp;
        temp -> prev = tail ;
        tail = temp ;
    }
}


//Insert at any position
void InsertAtPosition( Node* &head , Node* & tail , int position , int data ){

    if( position == 1 ){
        InsertAtHead( head ,tail ,  data );
        return;
    }

    Node* temp =head;
    int cnt = 1;

    while( cnt < position-1){
        temp = temp -> next ;
        cnt++;
    }

    if( temp -> next == NULL ){
        InsertAtTail( head , tail , data );
        return ;
    }

    //Create a new Node with Data
    Node* nodeToInsert = new Node( data );
    nodeToInsert -> next = temp -> next ;
    temp -> next -> prev = nodeToInsert;
    nodeToInsert -> prev = temp;
    temp -> next = nodeToInsert;

}

void deleteNode( Node* &head ,Node* &tail ,  int position ){

    if( position == 1 ){
        Node* temp = head;
        temp -> next -> prev = NULL ;
        head = temp -> next ;
        temp -> next = NULL ;
        delete temp;
    }
    else{

        Node* curr = head ;
        Node* prev = NULL ;

        int cnt = 1;

        while( cnt < position){
            prev =curr;
            curr = curr -> next;
            cnt++;
        }

        if( curr -> next == NULL ){
            tail = prev;
        }

        curr -> prev = NULL ;
        prev -> next = curr -> next ;
        curr -> next = NULL;

        // Memory free
        delete curr;

    }
}

// print the linkedlist
void print( Node* head ){
    Node* temp = head ;

    while( temp != NULL ){
        cout << temp -> data << " ";
        temp = temp -> next ;
    }
    cout << endl;
}

// Gives the lenth of the linked list 
int getLength(Node* head){
    Node* temp = head ;
    int len = 0;

    while( temp != NULL ){
        len++;
        temp = temp -> next ;
    }
    
    return len;
}

int main(){

    // Node* node1 = new Node( 10 );
    Node* head = NULL;
    Node* tail = NULL;
    print( head );
    InsertAtHead( head ,tail ,  12 ); 
    print( head );
    cout <<  "head "<< head -> data << endl;
    cout <<  "tail "<< tail -> data << endl;

    // cout << getLength( head )<< endl;

    InsertAtTail( head , tail , 23);
    print( head );
    cout <<  "head "<< head -> data << endl;
    cout <<  "tail "<< tail -> data << endl;


    InsertAtTail( head , tail , 24);
    print( head );
    cout <<  "head "<< head -> data << endl;
    cout <<  "tail "<< tail -> data << endl;


    InsertAtPosition( head , tail , 3 ,100);
    InsertAtPosition( head , tail , 5 ,101);
    print( head );
    cout <<  "head "<< head -> data << endl;
    cout <<  "tail "<< tail -> data << endl;

    deleteNode( head  ,tail , 5 );
    print( head );
    cout <<  "head "<< head -> data << endl;
    cout <<  "tail "<< tail -> data << endl;


    
}