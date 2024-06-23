//File Created by -- > ANRAG
//Created On -- > 23/06/24,Sun,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n , m ; cin >> n >> m;
    string s ; cin >> s;
    vector<int> ind(m);
    for(auto&i : ind) cin >> i;
    string c ; cin >> c;

    sort(ind.begin() , ind.end());
    sort(c.begin() , c.end());

    map<int , int> mp;

    for(auto i : ind)mp[i]++;

    int l = 0 , r = int(c.size())-1;

    for(auto i : mp)
    {
        int idx = i.first , count = i.second;

        if(count == 1)
        {
            s[idx-1] = c[l];
            l++;
        }
        else
        {
            while(count > 1)
            {
                s[idx-1] = c[r];
                r--;
                count --;
            }
            s[idx-1] = c[l];
            l++;
        }
    }

    cout << s << endl;
    return;

}
/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)solve();
}
