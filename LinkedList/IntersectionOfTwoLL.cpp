#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int data;
        ListNode* next;

    ListNode(int data){
        this -> data = data;
        this -> next = next;
    }
};

ListNode* getIntersectionNode(ListNode* headA , ListNode* headB){
    cout << "2";
    ListNode* h1 = headA;
    ListNode* h2 = headB;
    ListNode* ans = NULL;


    if( h1 == NULL || h2 == NULL){
        return NULL;
    }
    int cnt = 0;
    while(  h1 != NULL ){
        while( h2 != NULL ){
            if( h1 == h2 && h1 != NULL){
                ans = h1;
                cnt++;
                break;
            }
            h2 = h2 -> next;

            if( cnt == 1 ){
                break;
            }
        }
        h1 = h1 -> next;
        h2 = headB;

    }
    cout << ans;
    return ans;

    
}

int main(){

    ListNode* newNode = new ListNode(10);
    ListNode* headA = newNode;
    ListNode* headB = newNode;
    getIntersectionNode(headA , headB);
    cout << "Hii";
    return 0;
}