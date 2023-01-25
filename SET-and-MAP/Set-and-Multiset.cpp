#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int , greater<int>> s;

    s.insert(9);
    s.insert(7);
    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(7);
    s.insert(3);

    /* We can put the value of set in another set using s.begin() and s.end()*/
    set<int> s2( s.begin() , s.end() );

    set<int> :: iterator it;

    for( it = s.begin(); it != s.end() ; it++){
        cout <<*it << endl;
    }

    // s.begin()
    // s.end();
    // s.find(key); // O(logn)
    // s.insert( key ); //o(logn)
    // s.erase( key );  // O( log n )
    // s.size();
    // s.empty();

    // Advanced Function

    
    
}

