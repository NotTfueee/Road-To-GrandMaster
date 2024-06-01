//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{
    int n , m ; cin >> n >> m;
    vector<int>a(n) , b(m);
 
    for(auto&i : a)cin >> i;
    for(auto&i : b)cin >> i;
 
    int l = 0 , r = 0;
 
    while(r < m)
    {
        while(l < n && a[l] < b[r])l++;
 
        cout << l << " ";
 
        r++;
    }
 
    cout << endl;
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
