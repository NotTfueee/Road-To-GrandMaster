// Created by Anurag Bhatt on 04/03/24.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{
    int n ; cin >> n ;

    vector<long long> c(n);
    for(int i = 0 ; i <n ; ++i)
    {
        cin >> c[i];
    }

    sort(c.begin() , c.end());

    long long val = c[n>>1];

    long long ans = 0;

    for(auto i : c)
    {
        ans += abs(i - val);
    }

    cout << ans << endl;
}

/*----------------------------------------------------------------------------------------*/

int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   solve();

   return 0;

}