#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution{
    public:
        vector<vector<string>>groupAnagrams(vector<string> & strs){
                unordered_map<string, vector<string>> m;

                for(auto i : strs){
                    string t = i;
                    sort(t.begin(), t.end());
                    m[t].push_back(i);
                }

                vector<vector<string>> ans;

                for(auto s : m)
                    ans.push_back(s.second);

               return ans;
        }

};

int main(){

    vector<string>strs;
    strs = { "eat" , "tea", "tan", "ate", "nat" , "bat"};

    vector<vector<string>> finalAns;

    Solution sol;
    finalAns = sol.groupAnagrams(strs);
   for (int i = 0; i < finalAns.size(); i++) {
        for (int j = 0; j < finalAns[i].size(); j++)
            cout << finalAns[i][j] << " ";
        cout << endl;
    }

    return 0;
}