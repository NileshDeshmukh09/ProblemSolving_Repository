#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution{
    public:
        int lastStoneWeight(vector<int> & stones){

            priority_queue< int > max_heap;
            int n = stones.size();

            for(auto i : stones)
                max_heap.push(i);

            int first , second;

            while( n > 0){
                first = max_heap.top();
                max_heap.pop();

                second = max_heap.top();
                max_heap.pop();

                n-= 2;

                if(first - second > 0 ){
                    max_heap.push(first - second);
                    n += 1;
                }


            }

            if( !max_heap.empty() ){
                    return  max_heap.top();
                }
            return 0;
        }
};

int main(){

    int T;
    cout <<"Enter TestCases :";
    cin >> T;

    vector<int>stones;

    while(T>0){
        
        int N;
        cout << "Enter N : ";
        cin >> N;


        cout << "Enter the Element of the Array : "<< endl;
        for(int i = 0 ; i < N; i++){
            int val;
            cin >> val;

            stones.push_back(val);
        }

        Solution sol;
        cout << sol.lastStoneWeight(stones);
        return 0;
        
        T--;
    }

}