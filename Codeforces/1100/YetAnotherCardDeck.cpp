// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , q ; cin >> n >> q;

    vector<int> v(n);

    for(auto &i : v)cin >> i;


    string ans = "";

    while(q--)
    {
        int val ; cin >> val;

        int x = find(v.begin() , v.end() , val) - v.begin();

        cout << x + 1 << " ";

        rotate(v.begin() , v.begin() + x , v.begin() + x + 1);
    }

}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   solve();

   return 0;
}