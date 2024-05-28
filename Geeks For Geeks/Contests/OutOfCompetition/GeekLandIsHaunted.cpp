//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void dfs(vector<int> graph[] , int src , vector<int>&isHaunted ,vector<int>&visited , int hc , int m , int*ans)
{
    if(isHaunted[src-1])hc++;
    else hc = 0;

    if(hc > m || visited[src])return;

    if(graph[src].size() == 0)(*ans)++;

    visited[src] = 1;

    for(auto e : graph[src])
    {
        if(!visited[e])
        {
            dfs(graph , e , isHaunted , visited , hc , m , ans);
        }
    }
    
}
void solve()
{
    int n , m ; cin >> n >> m;
    vector<int> isHaunted(n+1 , 0);

    for(int i = 1 ; i <= n ; ++i)cin >> isHaunted[i];

    int q ; cin >> q;
    vector< vector<int> > edges(q , vector<int>(2));

    for(int i = 0 ; i < q ; ++i)
    {
        int s , d ; cin >> s >> d;
        edges[i][0] = s;
        edges[i][1] = d;
    }
    vector<int> graph[n+1];
    
    for(int i = 0 ; i < q ; ++i)
    {
        int src = edges[i][0] , des = edges[i][1];
        graph[src].push_back(des);
    }

    vector<int> visited(n+1 , 0);

    int ans = 0 ;

    dfs(graph , 1 , isHaunted , visited , 0 , m , &ans);

    cout << ans << endl;
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


  solve();
}
