// Created by Anurag Bhatt on 04/03/24.
 
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   int n , c; cin >> n >> c;
   vector<long long> v(n+1);

   for(int i = 1 ; i <= n ; ++i)cin >> v[i];

   priority_queue<long long , vector<long long> , greater<long long>>pq;
   
   for(int i = 1 ; i <= n ; ++i)
   {
      pq.push(v[i] + i);
   }

   long long count = 0;

   while(!pq.empty())
   {
      if(c < pq.top())break;

      c -= pq.top();
      pq.pop();
      count ++;
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


   int t ; cin >> t;
   while(t--)solve();


   return 0;
}