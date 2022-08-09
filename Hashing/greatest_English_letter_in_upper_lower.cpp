#include<iostream>
#include<cctype>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution{
    public :
        string greatestLetter(string s){
            unordered_map<char , int> mp;
            string ans="";

            int n = s.length();

            for(int i =0; i < n; i++){
                mp[s[i]]++;
            }

            sort(s.begin(), s.end());

            for(int i =0; i <n; i++){

                char l = tolower(s[i]);
                char u = toupper(s[i]);

                if(mp[l] && mp[u]){
                    ans = u;
                }
            }

            return ans;
        }
};

int main(){
    string str;
    cout << "Enter String : ";
    cin >> str;


    Solution s;
    cout <<"Gretest English Char : "<< s.greatestLetter(str) << endl;
    return 0;
}