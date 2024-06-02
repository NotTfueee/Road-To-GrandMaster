//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{

    long long n , s; cin >> n >> s;

    vector<long long> a(n);
    for(auto&i : a) cin >> i;
    
    long long mx = 0 , start = 0 , sum = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        sum += a[i];

        while(start < n && sum > s)
        {
            sum -= a[start];
            start++;
        }

        mx = max(mx , i - start + 1);
    }

    cout << mx << endl;
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


  solve();
}
