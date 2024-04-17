// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n ;
    string s ; cin >> s;

    if(n == 1)
    {
        cout << 0 << endl;
        return;
    }
    else if(n == 2)
    {
        if(s[0] == s[1])
        {
            cout << 1 << endl;
        }
        else cout << 0 << endl;

        return;
    }

    int ans = 0 , start = 0;

    for(int i = 1 ; i < n ; ++i)
    {
        if(s[i] != s[i-1])
        {
            ans += (i - start -1);
            start = i;
        }
    }

    ans += (n - start - 1);

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

   while(t--) solve();

}
