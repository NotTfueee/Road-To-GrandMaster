// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n; 
   vector<int> v(n+1);

   map<int , int> map;

   for(int i = 1 ; i <= n ; ++i)
   {
      cin >> v[i];
      map[v[i]] = i;
   }

   vector<pair<int , int>> ans;

   for(int i = n ; i >= 1 ; --i)
   {
      if(map[i] == i)continue;

      int currPosition = map[i];
      int temp = v[i];
      v[i] = i;
      v[currPosition] = temp;
      map[i] = i;
      map[temp] = currPosition;

      ans.push_back({currPosition , i});
   }

   cout << ans.size() << endl;
   for(auto i : ans)cout << i.first << " " << i.second << endl;
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
