//File Created by -- > ANRAG
//Created On -- > 10/07/24,Thu,Jun
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
 void  solve()
{
     int n ; cin >> n ;
     vector<long long > v(n);

     for(auto&i : v) cin >> i ;

     long long orr = 0;

     for(int i = 0 ; i < n ; ++i)orr |= v[i];

     int pos;

     for(int i = 0 ; i < 64 ; ++i)
     {
         if(!((orr >> i) & 1)){
             pos = i;
             break;
         }
     }

     int count = 0;

     for(int i = 0 ; i < n ; ++i)
     {
         for(int j = pos ; j < 64 ; ++j)
         {
             if((v[i] >> j) & 1){
                 count++;
                 break;
             }
         }
     }

     cout << count << endl;
     return;


}
/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)solve();
}