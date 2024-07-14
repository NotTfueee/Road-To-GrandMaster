//File Created by -- > ANRAG
//Created On -- > 11/07/24,Thu,Jul
#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    vector<int> v(3);
    for(int i = 0 ;i < 3 ; ++i)
    {
        cin >> v[i];
    }

    for(int i = 0 ; i < 5 ; ++i)
    {
        sort(v.begin() , v.end());

        v[0]++;
    }

    int sum = 1;

    for(int i = 0 ; i < 3 ; ++i)
    {
        sum *= v[i] ;
    }

    cout << sum << endl;
    return;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int t;
    cin >> t;
    while (t--)solve();
}