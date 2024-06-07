//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void print(vector<int>&v)
{
    for(auto i : v) cout << i << " ";
    cout << endl;
    return;
}

void solve()
{
    int n , f , k ; cin >> n >> f >> k;
 
    vector<int> v(n);
 
    for(auto&i : v) cin >> i;
    int fav = v[f-1];
    sort(v.rbegin() , v.rend());
 
    int start = -1 , end = -1;
 
    for(int i = 0 ; i < n ; ++i)
    {
        if(v[i] == fav && start == -1)start = i;
 
        if(v[i] == fav)end = i;
    }
 
    if((k-1) >= end)cout << "YES" << endl;
    else if((k-1) >= start && (k-1) < end )cout << "MAYBE" << endl;
    else cout << "NO" << endl;
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
