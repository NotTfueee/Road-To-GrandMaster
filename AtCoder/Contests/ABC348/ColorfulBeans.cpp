// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

const int MOD = 1000000007;

long long pow_mod(long long base, long long exponent) {
    long long result = 1;
    base %= MOD;
    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent >>= 1;
    }
    return result;
}

void solve()
{

  int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < n; ++i) {
        int x1 = v[i].first, y1 = v[i].second;
        int mx = 0, id = i + 1;

        for (int j = 0; j < n; ++j) {
            if (i == j) continue;

            int x2 = v[j].first, y2 = v[j].second;
            int X = abs(x2 - x1), Y = abs(y2 - y1);
            int dist = X * X + Y * Y;

            if (dist > mx) {
                mx = dist;
                id = j + 1;
            } else if (dist == mx && j + 1 < id) {
                id = j + 1;
            }
        }

        cout << id << endl;
    }

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