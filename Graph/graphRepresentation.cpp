#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cout << "Enter Vertex ( n ) : ";
    cin >> n;

    cout << "Enter Edge ( m ) : ";
    cin >> m;

    /* Approach 1 :
        Matrix has to be made and Insert all the  the node as 1  but , it need an space : ( n*n )
    */

    /*
     int adj[n+1][m+1];

     for(int i = 0; i < m ; i++ ){

         int u , v ;  // Represent the Edge ( between the vertex )
         cin >> u >> v;

         adj[u][v] = 1;
         adj[v][u] = 1;

     }
     */

    /**
     * Approach 2 : Is to make a ADJACENCY LIST , and insert all the element at the index,
     */

    /*
        vector<int>adj[n+1];

        for(int i =0; i < m; i++ ){
            int u , v;
            cin >> u >> v;

           /// for UNDIRECTED GRAPH 

            adj[u].push_back(v);
            adj[v].push_back(u);

            /// for DIRECTED GRAPH 

            /// u ---> v

            adj[u].push_back(v) /// it will not be bi-directional graph 
        }
    */
    return 0;
}