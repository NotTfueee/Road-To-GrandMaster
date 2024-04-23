// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

const int space = 2*1e5 + 1;
vector<int> nodes(space);

void print(vector<int>&nodes)
{
   for(int i = 1 ; i < 5 ; ++i)cout << nodes[i] << " ";
   cout << endl;
   return;
}

void make_set(int v)
{
   nodes[v] = v;
}

int find(int toFind)
{
   if(nodes[toFind] == toFind)return toFind;

   return nodes[toFind] = find(nodes[toFind]);
}

void union_set(int from , int to)
{
   from = find(from);
   to = find(to);

   nodes[from] = to;
}


void solve()
{
   int n , m ; cin >> n >> m;

   for(int i = 1 ; i <= n ; ++i)make_set(i);

   for(int i = 0 ; i < m ; ++i)
   {
      int from , to ; cin >> from >> to;

      union_set(from , to);
   }

   print(nodes);
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