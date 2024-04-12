// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
   /*

   we will check the mod operations

   (a + b) % MOD ==  ((a % MOD) + (b % MOD)) % MOD // for additions
   (a * b) % MOD ==  ((a % MOD) * (b % MOD)) % MOD // for multiplications

   (a - b) % MOD ==  ((a % MOD) - (b % MOD) + MOD) % MOD 
   we are adding MOD becuase it is possible after taking MOD of A the number
   can become less than (b % MOD) and this would lead to a -ve number and the 
   ans would be wrong so inorder to make the result +ve we add MOD to our number 


   (a/b) % MOD 
   for this we cannot use the MOD as we have did for the above statements 
   as this would lead to wrong ans 
   for finding the MOD of (a/b) we need to simplify the equation to 

   (a * (b)^-1) % MOD 
   that is we need first find the inverse of divisor and then multiply the 
   values and then only we can take a MOD

   to find the inverse we will use Fermat's little theorem

   which is simply ---> pow_mod(b , MOD-2)%MOD;

   */

const int MOD = 1000000007;

long long pow_mod(long long base, long long exponent) 
{
    long long result = 1;
    base %= MOD;
    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent >>= 1;
    }
    return result;
}

long long modularInverse(long long b)
{
   return pow_mod(b , MOD - 2);
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   long long n ; cin >> n;

   long long ans = modularInverse(n);
   cout << "Modular Inverse -->" << " " << ans << endl;

   cout << (ans * n)%MOD << endl;
   return 0;
}