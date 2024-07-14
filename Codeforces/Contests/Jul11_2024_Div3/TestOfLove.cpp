//File Created by -- > ANRAG
//Created On -- > 12/07/24,Fri,Jul
#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n , m , k ; cin >> n >> m >> k;
    string s; cin >> s;
    s = "L" + s + "L";
    n = s.size();

    int currPos = 0 , swim = 0 ;

    for(int i = 1 ; i < n ; ++i)
    {

        if(s[currPos] == 'C')
        {
            cout << "NO" << endl;
            return;
        }

        if(s[i] == 'L')
        {
            if(i - currPos <= m)currPos = i;
        }
        else if(s[i] == 'W')
        {
            if(s[currPos] == 'L')
            {
                if(i - currPos < m)continue;
                else
                {
                    swim ++;
                    currPos = i + 1;
                }
            }
            else if(s[currPos] == 'W')
            {
                swim++;
                currPos = i;
            }
        }
        else
        {
            if(s[currPos] == 'L')
            {
                if(i - currPos < m)continue;
                else currPos = i;
            }
            else if(s[currPos] == 'W')currPos = i;
        }
    }

    cout << ( currPos >= n - 1 && swim <= k ? "YES" : "NO") << endl;
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