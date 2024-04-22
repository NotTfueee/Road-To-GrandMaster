// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
const int space = 2*1e5 + 1;
vector<int> nodes(space,-1) , sz(space , 1);

int find(int toFind)
{
   if(nodes[toFind] == -1)return toFind;

   return nodes[toFind] = find(nodes[toFind]);
}

void union_set(int from , int to)
{
   int pFrom = find(from);
   int pTo = find(to);

   if(pFrom == pTo)return;

   sz[pTo] += sz[pFrom];
   nodes[pFrom] = pTo;
}

void solve()
{
   int n , m ; cin >> n >> m ;

   for(int i = 0 ; i < m ; ++i)
   {
      int from , to ; cin >> from >> to;

      union_set(from , to);
   }

   long long ans = 0;

   for(int i = 1 ; i <= n ; ++i)
   {
      if(nodes[i] == -1)
      {
         long long s = sz[i];

         ans += (s * (s-1))>> 1;
      }
   }
   cout << ans - m << endl;
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
