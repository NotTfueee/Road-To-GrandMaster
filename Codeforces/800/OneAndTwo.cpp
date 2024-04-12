// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n) , idx ;

    int two = 0;
    for(int i = 0 ; i < n ; ++i)
    {
      cin >> v[i];

      if(!(v[i]&1))
      {
         two++;
         idx.push_back(i+1);
      }
    }

    if(two&1)
    {
      cout << -1 << endl;
      return;
    }

    if(two == 0)cout << 1 << endl;
    else
    {
      int half = (two >> 1 )-1;
      cout << idx[half] << endl;
      return;
    }
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