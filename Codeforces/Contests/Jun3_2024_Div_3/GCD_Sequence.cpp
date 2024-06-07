//File Created by -- > ANRAG
//Created On -- > 06/06/24,Thu,Jun
#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
bool check(vector<int>&v)
{
    int prev = gcd(v[0] , v[1]);

    for(int i = 1 ; i < int(v.size() - 1) ; ++i)
    {
        int curr_gcd = gcd(v[i] , v[i + 1]);

        if(curr_gcd < prev)return false;

        prev = curr_gcd;
    }

    return true;
}

void solve()
{
    int n ; cin >> n;
    vector<int>v(n);

    for(auto&i : v)cin >> i;

    vector<int> a = v , b = v , c = v ;

    int g = -1 , toDel = -1;

    for(int i = 0 ; i < n - 1 ; ++i)
    {
        int curr_gcd = gcd(v[i] , v[ i + 1]);
        if(g > curr_gcd)
        {
            toDel = i;
            break;
        }

        g = curr_gcd;
    }

    if(toDel == -1)
    {
        cout << "YES" << endl;
        return;
    }

    a.erase(a.begin() + toDel - 1);
    b.erase(b.begin() + toDel);
    c.erase(c.begin() + toDel + 1);

    if(check(a) || check(b) || check(c))
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
    return;
}
/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)solve();
}
