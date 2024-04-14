// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve() 
{
    /*
    we just need to find if both the strings consist of 01 at the same location 
    if yes then we can make the strings equal else no we cannot make the strings equal
    */
    string a , b ; cin >> a >> b;

    int n = a.size();
    for(int i = 0 ; i < n - 1; ++i)
    {
        if(a[i] == '0' && a[i+1] == '1' && b[i] == a[i] && b[i+1] == a[i+1])
        {
            cout << 1 << endl;
            return;
        }
    }

    cout << 0 << endl;
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