//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{
    int n , m ; cin >> n >> m;
    vector<int> a(n) , b(m);
 
    for(auto&i : a) cin >> i;
    for(auto&i : b) cin >> i;
 
    long long ans = 0 , i = 0 , j = 0;
 
    while(i < n && j < m)
    {
        int target = a[i];
        long long cnt1 = 0 , cnt2 = 0;
 
        if(b[j] == target)
        {
            while(j < m && b[j] == target)
            {
                j++;
                cnt2++;
            }
 
            while(i < n && a[i] == target)
            {
                i++;
                cnt1++;
            }
 
            ans += (cnt1 * cnt2);
        }
        else if(a[i] < b[j])i++;
        else j++;
    }
 
    cout << ans << endl;
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
