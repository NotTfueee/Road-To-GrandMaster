// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , x ; cin >> n >> x;

    vector<int> s1(n) , s2(n) , s3(n);

    for(auto &i : s1)cin >> i;
    for(auto &i : s2)cin >> i;
    for(auto &i : s3)cin >> i;

    int val = 0;

    for(auto i : s1)
    {
        if((i & x) == i)val |= i;
        else break;
    }

    for(auto i : s2)
    {
        if((i & x) == i)val |= i;
        else break;
    }

    for(auto i : s3)
    {
        if((i & x) == i)val |= i;
        else break;
    }

    if(val == x)cout << "YES" << endl;
    else cout << "NO" << endl;

    return ;
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