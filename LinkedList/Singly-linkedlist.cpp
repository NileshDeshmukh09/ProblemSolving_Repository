#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

    // Constructor
    Node( int data ){
        this -> data = data;
        this -> next = NULL ;
    }

    // Desctructor
    ~Node(){
        int value = this -> data;
        // Memory free
        if( this -> next != NULL ){
            delete next ;
            this -> next = NULL ;
        }
        cout << "Memory is Free for Node with data " << value << endl;
    }
};

//Insert New Node at HEAD
void InsertAtHead( int data ,  Node* &head ){

    // Create New Node
    Node* temp = new Node(data );
    temp-> next = head ;
    head = temp;
}

//Insert New Nodeat TAIL 
void InsertAtTail( int data , Node* &tail){

    //create New Node
    Node*  temp  = new Node(data );
    tail-> next = temp;
    tail = temp;

};

void deleteNode(int position , Node*&head  ){

    //delete the first Node
    if( position == 1){
        Node* temp = head;
        head = head-> next ;
        temp -> next = NULL ;
        // Memory freee start node
        delete temp;

    }else {
        // delete the Middle or Last Node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while( cnt < position ){
            prev = curr;
            curr = curr -> next ;
            cnt++ ;
        }

        prev -> next = curr -> next;
        curr -> next = NULL ;
        delete curr ;

    }
}

void InsertAtPosition( int data , int position , Node* &head , Node* &tail ){

    Node* temp = head;
    int cnt = 1;

    if( position == 1 ){
        InsertAtHead( data , head );
        return;
    }

    while( cnt < position-1 ){
        temp = temp-> next;
        cnt++;
    }

    if( temp-> next == NULL ){
        InsertAtTail( data , tail );
        return;
    }

    Node* nodeToInsert = new Node( data );
    nodeToInsert -> next = temp -> next;
    temp -> next  = nodeToInsert ;

}

void print( Node* &head){

    Node* temp = head;

    // traverse linkedlist
    while( temp != NULL ){
        cout << temp-> data << " ";
        temp = temp -> next ;
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
    InsertAtHead( 12 , head );
    print( head);
    InsertAtTail( 15 , tail );
    print( head );
    InsertAtTail( 30 , tail );
    print( head );
    InsertAtHead( 11 , head );
    print( head );
    InsertAtPosition( 17 , 6 , head , tail );
    // InsertAtTail( 31 , head );
    deleteNode( 3 , head );
    print( head );

    cout << "Head :" << head -> data << endl;
    cout << "Tail :" << tail -> data << endl;
    return 0;
}