// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{

   int n ; cin >> n ;
   vector<int>v(n);

   for(auto & i : v) cin >> i;

   sort(v.begin() , v.end());

   map<int, int>map;

   for(int i = 0 ; i < n ; ++i)
   {
      map[v[i]]++;
   }

   int count = 0;

   for(auto i : map)
   {
      count += i.second / 3;
   }

   cout << count << endl;
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

   int t ; cin >>t ;

   while(t-- )solve();
}
