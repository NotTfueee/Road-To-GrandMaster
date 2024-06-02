//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{
    long long n , s , sum = 0 ; cin >> n >> s;
    vector<long long>a(n);
    for(auto&i : a) cin >> i;

    long long total = accumulate(a.begin() , a.end() , 0LL);

    if(s > total) 
    {
        cout << -1 << endl;
        return;
    }

    int mn = n , start = 0;
    
    for(int i = 0 ; i < n ; ++i)
    {
        sum += a[i];

        while(start < n && sum >= s)
        {
            mn = min(mn , i - start + 1);
            sum -= a[start];
            start++;
        }

    }

    cout << mn << endl;
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
