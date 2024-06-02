//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{
   int n , l , r ; cin >> n >> l >> r;
   vector<int> a(n+1);
   for(int i = 1 ; i <= n ; ++i)
   {
       a[i] = i;
   }

   while(l <= r)
   {
       swap(a[l] , a[r]);
       l++;
       r--;
   }

   for(int i = 1 ; i<= n ;++i)cout << a[i] << " ";
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


  solve();
}
