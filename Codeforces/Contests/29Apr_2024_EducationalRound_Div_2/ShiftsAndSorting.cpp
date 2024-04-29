//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    string s ; cin >> s;

    long long one = 0 , ans  = 0 , n = s.size();

    for(long long i = 0 ; i < n ; ++i)
    {
        if(s[i] == '1')
        {
            one ++;
            continue;
        }

        if(s[i] == '0' && one != 0)
        {
            long long len = one + 1;
            ans += len;
        }
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
    start();

    int t ; cin >> t;
    while(t--)solve();
}
