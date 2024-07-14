//File Created by -- > ANRAG
//Created On -- > 10/07/24,Wed,Jul

#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
bool isPrime(long long n)
{

    if(n == 1)return false;

    for(long long i = 2 ; i * i <= n ; ++i)
    {
        if(n % i == 0)return false;
    }

    return true;
}

void solve()
{
    long long x , temp ; cin >> x;
    temp = x;
    while(!isPrime(temp))
    {
        temp++;
    }

    long long nx = temp+1LL;

    while(!isPrime(nx))nx++;
    
    long long ans = nx * temp;
    cout << ans << endl;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)solve();
}
