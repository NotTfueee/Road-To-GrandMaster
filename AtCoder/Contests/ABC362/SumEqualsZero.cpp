//File Created by -- > ANRAG
//Created On -- > 13/07/24,Sat,Jul
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n ;
    vector<long long> L(n) , R(n);

    long long sumL = 0 , sumR = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> L[i] >> R[i];
        sumL += L[i];
        sumR += R[i];
    }

    if(sumL > 0 || sumR < 0)
    {
        cout << "No" << endl;
        return;
    }

    long long sum = sumL;
    vector<long long> ans = L ;
    for(int i = 0 ; i < n ; ++i)
    {
        long long d = min(R[i] - L[i] , -sum);
        sum += d;
        ans[i] += d;
    }

    cout << "Yes" << endl;
    for(auto i : ans) cout << i << " " ;
    cout << endl;
    return;
}

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();
}
