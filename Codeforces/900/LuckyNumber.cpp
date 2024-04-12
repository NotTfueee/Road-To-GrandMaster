// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


int check(long long a)
{

    long long mx = a % 10 , mn = a % 10;
    while(a)
    {
        long long d = a % 10;
        a /= 10;

        mx = max(mx , d);
        mn = min(mn , d);
    }

    return mx - mn;
}

void solve()
{
    long long a , b;
    cin >> a >> b;

    long long ans = b , mx = 0;

    for(int i = a ; i <= b ; ++i)
    {
        long long val = check(i);

        if(mx < val)
        {
            mx = val;
            ans = i;

            if(val == 9)break;
        }
    }


    cout << ans << endl;
    return ;
}

int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

    ZOOM int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;

}