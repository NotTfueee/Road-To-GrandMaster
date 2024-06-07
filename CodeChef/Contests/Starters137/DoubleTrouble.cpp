//File Created by -- > ANRAG
//Created On -- > 05/06/24,Wed,Jun

#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    int n ; cin >> n;
    vector<int>x(n) , p(n);
    for(auto&i : x)cin >> i;
    for(auto&i : p)cin >> i;


    // ---->
    int i = 0 ;
    while(i < n - 1 && x[i] + p[i] >= x[i+1])i++;
    if(i == n-1)
    {
        cout << "YES" << endl;
        return;
    }
    i++;
    // --> -->
    while(i < n - 1 && x[i] + p[i] >= x[i+1])i++;
    if(i == n-1)
    {
        cout << "YES" << endl;
        return;
    }


    // <----
    i = n-1 ;
    while(i > 0 && abs(x[i] -  p[i] )<= x[i-1])i--;
    if(i == 0)
    {
        cout << "YES" << endl;
        return;
    }
    i--;
    // <-- <--
    while(i > 0 && abs(x[i] - p[i]) <= x[i-1])i--;
    if(i == 0)
    {
        cout << "YES" << endl;
        return;
    }

    //-> <-
    int j = n-1;
    i = 0;
    while(i < n-1 && x[i] + p[i] >= x[i+1])i++;
    while(j > 0 && abs(x[j] - p[j]) <= x[j-1])j--;
    if(j <= i || i + 1 >= j)
    {
        cout << "YES" << endl;
        return;
    }

    // <- ->
    for(int k = 1 ; k < n-1 ; ++k)
    {
        i = k;
        j = k + 1;
        while(i > 0 && abs(x[i] - p[i]) <= x[i-1])i--;
        while(j < n - 1 && x[j] + p[j] >= x[j+1])j++;

        if(i == 0 && j == n-1)
        {
            cout << "YES" << endl;
            return;
        }
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
