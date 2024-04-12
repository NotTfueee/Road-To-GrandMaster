// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
    int n ; cin >> n ;

    vector<int>v(n);

    int m = 0 , p = 0 , sum = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];

        if(v[i] < 0)m++;
        else p ++;

        sum += v[i];
    }

    if(p >= m)
    {
        if((m&1) == 0)cout << 0 << endl;
        else cout << 1 << endl;
    }
    else
    {
        int c = 0;
        while(sum < 0)
        {
            sum +=2 ;
            c++;
            m--;
            p++;
        }

        if((m&1))cout << c + 1 << endl;
        else cout << c << endl;
    }
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