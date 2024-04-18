// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
const int SIZE = 5*1000000+1;
vector<long long>sei(SIZE);
vector<long long>countOfPrime(SIZE);
vector<long long>pfs(SIZE);


void seive()
{
   for(long long i = 1 ; i <= SIZE ; ++i)sei[i] = i;

   for(long long i = 2 ; i <= SIZE ; ++i)
   {
      if(sei[i] != i)continue;

      for(long long j = i * i ; j <= SIZE ; j += i)
      {
         if(sei[j] == j)sei[j] = i;
      }
   }
}

void factors()
{
   countOfPrime[0] = 0;
   countOfPrime[1] = 1;

   for(long long i = 2 ; i <= SIZE ; ++i)
   {
      long long count = 0;
      long long x = i;
      while(x != 1)
      {
         x /= sei[x];
         count ++;
      }

      countOfPrime[i] = count;
   }


   long long sum = 0;

   for(long long i = 2 ; i <= SIZE ; ++i)
   {
      sum += countOfPrime[i];
      pfs[i] = sum;
   }
}
void solve()
{
   long long a , b; cin >> a >> b;

   cout << pfs[a] - pfs[b] << endl;
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

   seive();
   factors();
   int t ; cin >> t;
   while(t--) solve();

}
