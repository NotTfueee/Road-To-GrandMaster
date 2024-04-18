// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
/*
 prime factorization using Seive of Erathosthenes , with this we can handle each query in 
 log n time so the maximum time complexity of this code will be nlogn 

 in this algo we mark all the composite numbers with their smallest prime factor and then 
 when we need the prime of a query we keep on dividing the number with the prime factor 
 stored at index n until we make the number n equal to 1 then we stop 

 we can modify the function if we want the count of the prime factors or the prime factors 
 themselves whichever way we want 

 i will write the code for finding the count as well as finding the numbers as well
 */

const int SIZE = 5*1000000 + 1;

vector<long long> seive(SIZE) , countOfPrimes(SIZE) , pfs(SIZE);

void seiveStart()
{
   // we start by marking all the elements in the array equal to their corresponding indexes


   for(long long i = 1 ; i <= SIZE ; ++i)seive[i] = i;

   for(long long i = 2 ; i <= SIZE ; ++i)
   {

      /*
      check if the index and the element are different or not if yes means that the
      index is already marked with a smaller prime factor
      */

      if(seive[i] != i)continue;

      for(long long j = i * i ; j <= SIZE ; j += i)
      {

         if(seive[j] == j)seive[j] = i;
      }
   }
}

void factors()
{

   /*
   here i am counting the number of prime factors that make up a number i that start from 
   2 to 5000001

   and storing it in a vector countOfPrimes
   */
   seive[0] = 0;
   seive[1] = 1;

   for(long long i = 2 ; i<= SIZE ; ++i)
   {
      long long x = i , count = 0;

      while(x != 1)
      {
         x /= seive[x];
         count ++;
      }

      countOfPrimes[i] = count;
   }



   /*
   i have just counted the number of prime factors that are used to create a number
   now i am calculating the prefix sum so that i can ans the number of prime factors in 
   between two numbers in O(1) time complexity

   this is optional
   */

   long long sum = 0;

   for(long long i = 1 ; i <= SIZE ; ++i)
   {
      sum += countOfPrimes[i];

      pfs[i] = sum;
   }
}

vector<int> getFactors(long long n)
{
   /*

   in this function i am finding the prime factors that make up the current number
   and returning the in a vector 
   */ 
   vector<int> ans;

   while(n != 1)
   {
      ans.push_back(seive[n]);
      n /= seive[n];
   }
   return ans;
}


void solve()
{
   long long x = 1000000;

   auto fac = getFactors(x);

   for(auto i : fac)cout << i << " ";

   cout << endl;
}
/*----------------------------------------------------------------------------------------*/

int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   seiveStart();
   factors();

   solve();
}
