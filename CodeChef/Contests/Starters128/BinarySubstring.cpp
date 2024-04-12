// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n ; cin >> n; 
    string s ; cin >> s;

    int c00 = 0 , c11 = 0 , c10 = 0 , c01 = 0 , ans = 0;

    for(int i = 0 ; i < n ; i += 2)
    {
        if(s[i] == '0' && s[i+1] == '0')c00++;
        else if(s[i] == '1' && s[i+1] == '1')c11++;
        else if(s[i] == '0' && s[i+1] == '1')c01++;
        else c10++;
    }

    ans = ((c00 + c11) << 1);

    ans = ans + min(c10 , 2) + (c01 > 0 ? 2 : 0);

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

   int t ; cin >> t; 
   while(t-- ) solve();
}