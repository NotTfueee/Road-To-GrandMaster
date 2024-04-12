// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/


/* 
   time complexity of this code is O(√n) and is the fastest , when we have to check only 
   for a couple of numbers but if we are given q quries to check if the number is prime or not 
   we will not use this 

   we use seive of Eratosthenes
*/
bool isPrime(long long n)
{
   if(n == 1)return true;

   for(int i = 2 ; i * i <= n ; ++i)
   {
      if(n % i == 0)return false;
   }

   return true;
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   long long n ; cin >> n ;

   cout << isPrime(n) << endl;
   return 0;
}