#include<iostream>
using namespace std;

// Implement TRIE
class TrieNode{

    public :
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data = ch;
            for(int i=0; i <26; i++){
                children[i] = NULL;
            }
            isTerminal = false;
        }
};

class Trie {
    public:
        TrieNode* root;

        Trie(){
            root = new TrieNode('\0');
        }

        void insertUtil(TrieNode* root , string word){

            // base case 
            if(word.length() == 0){
                root->isTerminal = true;
                return;
            }
            
        // Assumption - words will be in CAPS
        int index = word[0] - 'A';
        TrieNode* child;

        // Present
        if(root-> children[index] != NULL){
            child = root->children[index];
        }else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index]=child;
        }

        // Recursion
        insertUtil(child, word.substr(1));

        }

        void insertWord(string word){
            insertUtil(root , word);
        }

        // Search for the node
        bool searchUtil(TrieNode* root , string word){

            // base case
            if(word.length() == 0 ){
                return root->isTerminal;
            }

            int index = word[0] - 'A';
            TrieNode* child;

            // Present
            if(root -> children[index] != NULL){
                child = root ->children[index];
            }
            else{
                // Absent
                return false;
            }

            // recursion
            return searchUtil(child , word.substr(1));
        }

        bool searchWord(string word){

           return  searchUtil(root, word);
        }

        void removeWord(string word){

            if( searchWord(word) ){
                root->isTerminal = false;
            }

        }
};

int main(){

    Trie* t = new Trie();

    t -> insertWord("ABCD");
    t -> insertWord("TIME");
    t -> insertWord("DUCK");

    cout << "Present OR Not : " << t->searchWord("TIM") << endl;
    return 0;
}