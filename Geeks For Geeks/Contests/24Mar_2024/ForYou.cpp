// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

const int MOD = 1e9+7;

void print(vector<long long>&v )
{
   for(auto i : v) cout << i << " ";
   cout << endl;

   return;
}

void solve()
{
   int n ; cin >> n;
   vector<long long> arr(n);
   for(auto&i : arr) cin >> i;

   int m ; cin >> m;
   vector<vector<long long>> order(m , vector<long long> (2 , 0));
   for(int i = 0 ; i < m ; ++i)
   {
      for(int j = 0 ; j < 2 ; ++j)cin >> order[i][j];
   }

   vector<long long>temp(n , 0);
   for(int i = 0 ; i < m ; ++i)
   {
      int l = order[i][0] , r = order[i][1];
      l--;

      temp[l]++;
      if(r < n)temp[r]--;
   }

   for(int i = 1; i < n ; ++i)
   {
      temp[i] = temp[i-1] + temp[i];
   }

   sort(temp.begin() , temp.end());
   sort(arr.begin() , arr.end());

   long long ans = 0;
   for(int i = 0 ; i < n ; ++i)
   {
      ans = (ans%MOD +  ((temp[i]%MOD) * (arr[i])%MOD)%MOD)%MOD;
   }

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


   int t ; cin >> t;
   while(t--)solve();
   return 0;
}