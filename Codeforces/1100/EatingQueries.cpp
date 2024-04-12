// Created by Anurag Bhatt on 04/03/24.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/


void print(vector<int> a)
{

    for(auto i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    return;
}

void solve()
{
    int n , q ; cin >> n >> q;

    vector<long long> a(n),p(n);

    for(int i = 0 ; i < n ; ++i)cin >> a[i];

    sort(a.rbegin() , a.rend());

    for(int i = 0 ; i < n ; ++i)p[i] = (i ? p[i-1] : 0) + a[i];

    while(q-- )
    {
        long long x ; cin >> x;

        int l = 1 , r = n , ans = -1;

        while(l <= r)
        {
            int mid = (l + r) >> 1;

            if(p[mid-1] >= x)
            {
                ans = mid;
                r = mid -1;
            }
            else l = mid + 1;
        }

        cout << ans << endl;
    }

    return ;
}

/*----------------------------------------------------------------------------------------*/

int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t; cin >> t;

   while(t-- ) solve();

   return 0;

}