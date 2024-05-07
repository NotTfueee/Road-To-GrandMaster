//// Created by Anurag Bhatt on 04/03/24.

#include <bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , d ; cin >> n >> d;

    vector<int> v(n);
    for(auto&i : v) cin >> i;

    sort(v.begin() , v.end());

    int r = n - 1 , l = 0 , c = 0;

    while(l <= r)
    {
        int sum = v[r];

        while(l < r && sum <= d)
        {
            sum += v[r];
            l++;
        }

        if(sum > d)c++;

        r--;
    }

    cout << c << endl;
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


    int t ; cin >> t;
    while(t--)solve();
}
