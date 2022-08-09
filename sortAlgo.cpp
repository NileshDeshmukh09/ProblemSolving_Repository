#include <bits/stdc++.h>
using namespace std;

int main() {
	string ch;
	cin >> ch;
	
	sort(ch.begin() , ch.end());
	
	int num;
	cin >> num ;
	
	while( num >0 ){
	   string word;
	   cin >> word;
	   
       int count= 0;

       for(int i = 0; i < word.length() ; i++){
           for(int j = 0 ; j < ch.length(); j++){
               if(ch[i] == word[i]){
                   count++;
               }
           }
       }

       if(count == word.size()){
           cout << "Yes"<< endl;
       }else{
           cout << "No" << endl;
       }
   
	  
	   num--;
	}
	
	
	return 0;
}
