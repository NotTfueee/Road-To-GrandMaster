//File Created by -- > ANRAG
//Created On -- > 23/06/24,Sun,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    int n ; cin >> n ;
    string s; cin >> s;


    if(s[0] == '0' && n >= 3)
    {
        cout << 0 << endl;
        return ;
    }

    int mn = INT_MAX;
    for(int i = 0 ; i < n-1 ; ++i)
    {
        int sum = -1;
        for(int j = 0 ; j < n ; ++j)
        {
            int d ;
            if(j == i)
            {
                int f = s[j] - '0' , sec = s[j + 1] - '0';
                d = (f *10) + sec;
                ++j;
            }
            else d = s[j] - '0';

            if(d == 0)
            {
                cout << 0 << endl;
                return;
            }


            if(sum == -1)sum = d;
            else if(sum == 1 || d == 1)sum *= d;
            else sum += d;
        }

        mn = min(mn , sum);
    }

    cout << mn << endl;
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
