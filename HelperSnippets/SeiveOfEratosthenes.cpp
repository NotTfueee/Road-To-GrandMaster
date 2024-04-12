// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/


/*
 seive of eratosthenes is used when we have a large query and we need to determine whether the 
 number is prime or not instead of doing a primality check which would cost us O(√n * q) 
 this costs us (n log(log(n))) which is way faster 
 */

void erathosthes(vector<bool>& seive)
{
   int n = seive.size();

   // as these two numbers are neither prime nor composite 
   seive[0] = 0;
   seive[1] = 0;

   for(long long i = 2 ; i < n ; ++i)
   {
      // if the number has already been marked as composite the we will skip it 
      if(seive[i] == 0 )continue;

      for(long long j = i * i ; j < n ; j += i)seive[j] = 0;
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

   long long size ; cin >> size;

   // initially we say that all the numbers are prime so we mark them as true
   vector<bool> seive(size , true);

   // now we run the seive of eratosthenes 
   erathosthes(seive);

   // here we are printing the whole array 
   for(int i = 0 ; i < size ; ++i)
   {
      cout << i << " " << (seive[i] == false ? "Not Prime" : "Prime") << endl;
   }
   return 0;
}