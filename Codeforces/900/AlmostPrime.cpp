// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
const int space = 3001;
vector<int>s(space) , pfs(space , 0) , countOfPrimes(space , 0);

void seive()
{
   for(int i = 0 ; i <= space ; ++i)s[i] = i;

   for(int i = 2 ; i * i <= space ; ++i)
   {
      if(s[i] != i)continue;

      for(int j = i * i ; j <= space ; j += i)
      {
         if(s[j] == j)s[j] = i;
      }
   }
}

void factors()
{
   s[0] = 0;
   s[1] = 0;

   for(int i = 2 ; i <= space ; ++i)
   {
      int x = i;
      set<int> st;

      while(x != 1)
      {
         st.insert(s[x]);
         x /= s[x];
      }

      if(st.size() == 2)countOfPrimes[i] = 1;
   }

   int sum = 0;

   for(int i = 0 ; i <= space ; ++i)
   {
      sum += countOfPrimes[i];

      pfs[i] = sum;
   }
}
void solve()
{
   int n; cin >> n ;

   cout << pfs[n] << endl;
}
/*----------------------------------------------------------------------------------------*/

int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   seive();
   factors();
   solve();
}
