// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
const int space = 2*1e5+1;
vector<bool>pre(space , 0);

bool getTernary(int val)
{

   vector<int> v;
   while(val >= 3)
   {
      int d = val % 3 ;

      if(d == 2) return true;

      val /= 3;
   }
   
   return false;
}

void preprocess()
{
   for(int i = 1 ; i <= space ; ++i)
   {
      if(getTernary(i))pre[i] = 1;
   }
}


void solve()
{
   int n ; cin >> n ;

   if(pre[n + 1])
   {
      for(int i = n ; i > 0 ; --i)cout << i << " ";

      cout << endl;
      return;
   }


   if(pre[n])
   {
      for(int i = n-1 ; i > 0 ; --i)cout << i << " ";

      cout << n << endl;
      return;
   }

   for(int i = n - 2 ; i > 0 ; --i)cout << i << " ";

   cout << n << " " << n-1 << endl;
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

   preprocess();
   int t ; cin >> t;
   while(t--)solve();
}
