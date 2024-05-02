//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    long long n ; cin >> n ;
    vector<long long> a(n) , b(n);

    for(auto&i : a) cin >> i;
    for(auto&i : b) cin >> i;

    map<long long , long long> mp , mp2;

    long long c = 1 , prev = a[0];
    for(int i = 1 ; i < n ;++i)
    {
        if(a[i] == prev)c++;
        else 
        {
            mp[prev] = max(mp[prev] , c);
            c = 1;
        }

        prev = a[i];
    }

    if(c)mp[prev] = max(mp[prev] , c);

    c = 1;
    prev = b[0];

    for(int i = 1; i < n ;++i)
    {
        if(b[i] == prev)c++;
        else 
        {
            mp2[prev] = max(mp2[prev] , c);
            c = 1;
        }

        prev = b[i];
    }

    if(c)mp2[prev] = max(mp2[prev] , c);

    long long ans = 1;

    for(auto i : mp)ans = max(ans , i.second);

    for(auto i : mp2)ans = max(ans , mp[i.first] + i.second);


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
