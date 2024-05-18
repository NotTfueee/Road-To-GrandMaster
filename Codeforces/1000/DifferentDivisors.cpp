//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

bool isPrime(long long n)
{
    for(long long i = 2 ; i*i <= n ; ++i)
    {
        if(n % i == 0)return false;
    }
    return true;
}

void solve()
{
    long long d ; cin >> d;

    long long prev = 1 , first = -1 , second = -1;

    for(long long i = 1 ; i <= 1e8 ; ++i)
    {
        long long diff = (i - prev);

        if(diff >= d && isPrime(i))
        {
            if(first == -1)first = i;
            else if(second == -1) second = i;
            else break;

            prev = i;
        }
    }

    long long ans = first * second ;
    cout << ans << endl;
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
