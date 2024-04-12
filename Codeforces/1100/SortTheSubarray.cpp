// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n ; 
    vector<int> a(n+1) , b(n+1);

    for(int i = 1; i <= n ; ++i)cin >> a[i];
    for(int i = 1; i <= n ; ++i)cin >> b[i];

    int l = 1 , r = n ;

    for(int i = 1 ; i <= n ; ++i)
    {
        if(a[i] != b[i])
        {
            l = i;
            break ;
        }
    }

    for(int i = n ; i>= 1; --i)
    {
        if(a[i] != b[i])
        {
            r = i;
            break;
        }
    }

    while(l > 1 && b[l-1] <= b[l])l--;
    while(r < n && b[r+1] >= b[r])r++;

    cout << l << " " << r << endl;
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