#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public : 
        char data;
        TrieNode* children[26];
        bool isTerminal;
    
        TrieNode(char ch){
            ch = data;
            for(int i = 0 ; i < 26; i++){
                children[i] = NULL;
            }
            isTerminal = false;
            
        }
};

class Trie{
    public:
        TrieNode* root;
        
        Trie(){
            root = new TrieNode('\0');
        }
        
        void insertUtil(TrieNode* root, string word){
            
            if(word.length() == 0){
                root->isTerminal = true;
            }
            
            int index = word[0]-'a';
            TrieNode* child;
            
            // Present 
            if( root->children[index] != NULL){
                child = root -> children[index];
            }else{
                child = new TrieNode(word[0]);
                root->children[index] = child;
            }
            
            // recursion
            insertUtil(child , word.substr(1));
        }
        
        void insertWord(string word){
            insertUtil(root , word);
        }
    
        void printSuggestions(TrieNode* curr , vector<string> &temp, string prefix){
            
            if(curr -> isTerminal){
                temp.push_back(prefix);
            }
            
            for( char ch = 'a'; ch <= 'z'; ch++){
                TrieNode* next = curr -> children[ch -'a'];
                
                if(next != NULL){
                    prefix.push_back(ch);
                    printSuggestions(next , temp , prefix);
                    prefix.pop_back();
                }
            }
            
            
        }
    
    
        vector<vector<string>>getSuggestions(string str){
            
            TrieNode* prev = root;
            vector<vector<string>>output;
            string prefix = "";
            
            for(int i = 0; i < str.length(); i++){
                char lastCh = str[i];
                
                prefix.push_back(lastCh);
                
                TrieNode* curr = prev -> children[lastCh - 'a'];
                
                if(curr == NULL ){
                    break;
                }
                
                vector<string> temp;
                
                printSuggestions(curr , temp , prefix);
                output.push_back(temp);
                temp.clear();
                prev = curr;
            }
            
            return output;
        }

};


class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
        /* Creation of Trie */
        Trie* t = new Trie();
        
        for(int i = 0;  i < products.size(); i++){
            string str = products[i];
            t -> insertWord(str);
        }
        
        return t ->getSuggestions(searchWord);
    }
};

int main(){
        vector<string>products = {"bags","baggage","banner","box","cloths"};
        string searchWord = "bags";

        Solution s;
        
        cout << s.suggestedProducts(products , searchWord);
}