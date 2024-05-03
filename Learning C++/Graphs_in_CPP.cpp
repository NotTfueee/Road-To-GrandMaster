//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int V , E ; cin >> V >> E;

    vector< vector<int> > input_for_graph(E , vector<int>(2));

    for(int i = 0 ; i < E ; ++i)
    {
        for(int j = 0 ; j < 2 ; ++j)cin >> input_for_graph[i][j];
    }

    /*
    creating an undirected graph and inserting values into it using the input for graphs 2d array 

    the graph will be of size V that is the number of vertices that are present in the graph 
    */

    vector<int> undirected_graph[V];

    for(int i = 0 ; i < E ; ++i)
    {
        int u = input_for_graph[i][0] , v = input_for_graph[i][1];

        undirected_graph[u].push_back(v);
        undirected_graph[v].push_back(u);
    }

    for(int i = 0 ; i < V ; ++i)
    {
        cout << i << "--->";
        for(int e : undirected_graph[i])cout << e << " ";
        cout << endl;
    }

    cout << endl << endl;
    

    /*
    creating an directed graph and inserting the values into it the graph will be of size V , that is the 
    number of vertices that are present in the graph 
    */

    vector<int> graph[V];

    for(int i = 0 ; i < V ; ++i)
    {
        int u = input_for_graph[i][0] , v = input_for_graph[i][1];

        graph[u].push_back(v);
    }

    for(int i = 0 ; i < V ; ++i)
    {
        cout << i << "---> ";
        for(int e : graph[i])cout << e << " ";
        cout << endl;
    }

    return;


}
/*----------------------------------------------------------------------------------------*/

int main()
{
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


    int t ; cin >> t;
    while(t--)solve();
}
