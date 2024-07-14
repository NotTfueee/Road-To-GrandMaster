//File Created by -- > ANRAG
//Created On -- > 11/07/24,Thu,Jul
#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n , k ; cin >> n >> k;
    vector<int> v(k);
    for(auto&i : v) cin >> i;

    sort(v.begin() , v.end());
    int count = 0;

    for(int i = 0 ; i < k-1 ; ++i)
    {
        if(v[i] == 1){
            count++;
        }
        else count += (v[i] + (v[i] - 1));
    }   

    cout << count << endl;
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