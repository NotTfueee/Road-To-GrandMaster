// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{

   int n ; cin >> n;
   vector<long long> arr(n);
   for(auto &i : arr)cin >> i;

   int q ; cin >> q;
   vector<vector<long long>>queries(q , vector<long long>(2));
   for(int i = 0 ; i < q ; ++i)
   {
      for(int j = 0 ; j < 2 ; ++j)
      {
         cin >> queries[i][j];
      }
   }

   vector<vector<long long>> pfs(n + 1 , vector<long long>(32 , 0));

   for(int i = 1; i <= n ; ++i)
   {
      int element = arr[i-1];
      for(int j = 0 ; j < 32 ; ++j)
      {
         if((element >> j)&1)pfs[i][j] = pfs[i-1][j]+1;
         else pfs[i][j] = pfs[i-1][j];
      }
   }

   vector<long long> ans;
   for(int i = 0 ; i < q ; ++i)
   {
      int l = queries[i][0] , r = queries[i][1] , x = 0;
      for(int j = 0 ; j < 32 ; ++j)
      {
         if((pfs[r][j] - pfs[l-1][j]))
         {
            x += (1 << j);
         }
      }

      ans.push_back(x);
   }

   for(auto i : ans) cout << i << " ";
   cout << endl;

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