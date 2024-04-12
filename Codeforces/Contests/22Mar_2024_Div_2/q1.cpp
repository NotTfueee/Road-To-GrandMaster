// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{

    int n ; cin >> n ;
    vector<int> v(n+1);

    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin() , v.end());

    int mid;

    if(n % 2 == 0)
    {
        mid = (n / 2);
    }
    else mid = (n + 1)/ 2;

    int c = 0;
    for(int i = mid ; i <= n ; ++i)
    {
        if(v[i] == v[mid])c++;
    }

    cout << c << endl;
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

   return 0;
}