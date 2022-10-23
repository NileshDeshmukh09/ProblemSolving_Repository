// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cout <<"Enter the string :";
//     cin>>s;
      
//     unordered_map<char , int >mp;
       
//     for(long i=0;i<s.length();i++){
//         mp[s[i]]++;
//     }

//     int maxx = s[0];

//     for(auto i : mp){
//         cout<< i.first<<" - "<< i.second<<endl;
//         // if(mp[maxi]<m[itr->first]){
//         //     maxi=itr->first;
//         // }
//         if( maxx < i.first){
//             maxx = i.first;
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>

 using namespace std;

 int main()
{
    string s;
    cout <<"Enter the string :";
    cin>>s;
      
    map<char , int >mp;   
       
    for(long i=0; i<s.length(); i++){
        mp[s[i]]++;
    }
    int maxi=s[0];
    int cnt = 0;
    for( auto i : mp){
        cout<<i.first<<" - "<<i.second<<endl;
        if(mp[maxi] < mp[i.first]){
            maxi=i.first;
            cnt = i.second;
        }
    }  

    // for(int i=0; i < s.length(); i++){
    //     m[s[i]]++;
    // }

    // int maxx = 0;
    // for( auto i : m){
    //     if( maxx < i.second){
    //         maxx = i.second;
    //     }
    // }
    cout << "OUTPUT : ";
    cout<<(char)maxi << " - " << cnt;
    return 0;
}