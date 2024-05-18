//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

long long lcm(long long a , long long b)
{
    return (( a / __gcd(a , b)))*b;
}
 
long long check(long long n )
{
    long long temp = n , result = 1;
 
    while(temp > 0)
    {
        int d = temp % 10 ;
 
        if(d != 0)
        {
            result = lcm(result , d);
        }
 
        temp /= 10;
    }
 
    return result;
}

void solve()
{
    long long n ; cin >> n;
 
    while(true)
    {
        long long lcm = check(n);
 
        if(n % lcm == 0)
        {
            cout << n << endl;
            return;
        }
        n++;
    }
 
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
}
