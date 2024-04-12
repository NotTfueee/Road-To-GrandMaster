// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n ; cin >> n ;
   vector<long long > v(n);

   for(int i = 0 ; i < n ; ++i)cin >> v[i];

   sort(v.begin() , v.end());
   
   long long sum = 1;

   for(int i = 0 ; i < n ; ++i)
   {
      if(v[i] > sum)break;

      sum += v[i];
   }

   cout << sum << endl;

   return ;
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
 
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   solve();

   return 0;
}