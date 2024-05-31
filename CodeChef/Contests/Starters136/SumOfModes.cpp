//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    long long n ; cin >> n;
    string s ; cin >> s;

    map<long long , long long>map;

    map[0] = 1;

    long long c = 0 , count = 0;
    for(long long i = 0 ; i < s.size() ; ++i)
    {
        if(s[i] == '1')c++;
        else c--;

        if(map.find(c) == map.end())map[c] = 1;
        else
        {
            count += map[c];
            map[c] = map[c] + 1;
        }
    }

    long long total = (n * (n + 1)) >> 1;

    long long remain = total - count;

    long long ans = remain + (count << 1);

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


  solve();
}
