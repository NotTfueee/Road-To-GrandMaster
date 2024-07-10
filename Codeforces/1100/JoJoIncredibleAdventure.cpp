// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
    string s ; cin >> s;
    s += s;

    int mx = 0 , c = 0;

    for(int i = 0 ; i < int(s.size()); ++i)
    {
        if(s[i] == '1')c++;
        else c = 0;

        mx = max(mx , c);
    }

    long long n = s.size() >> 1;

    if(mx >= n)
    {
        cout << (n * n) << endl;
        return;
    }

    long long ans = 0;
    for(long long i = 1 ; i <= mx ; ++i)
    {
        ans = max(ans , (mx - i + 1LL) * i);
    }

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
   while(t-- ) solve();

   return 0;
}