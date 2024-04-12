// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
     int n ; cin >> n ;
    int mod = int(1e9 + 7);

    vector<int> a(n) , b(n);

    for(auto &i : a) cin >> i; 
    for(auto &i : b)cin >> i;

    sort(a.begin() , a.end());
    sort(b.begin() , b.end());

    for(int i = 0 ; i < n ; ++i)
    {
        // because if there is any element that in sorted order is smaller than the value of 
        // b[i] this means that it can be only placed in values less than itself and if we do that
        // where will the other smaller values go so there is no place 
        if(a[i] <= b[i])
        {
            cout << 0 << endl;
            return;
        }
    }

    long long ans = 1;

    for(int i = 0 ; i < n ; ++i)
    {
        int val = lower_bound(b.begin() , b.end() , a[i]) - b.begin();

        /* why val -= i , because we will check all the places for current value of a[i] where can
            we keep the current value and out of all places after placing the current value our available
            options for every element next in line the options will decrease as we are placing a element on
            those positions that is why 
        */
        val -= i;

        ans = (ans * val) % mod;
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

   int t ; cin >> t;

   while(t--)solve();

   return 0;
}