// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/

void solve()
{
    int n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++) {
                cout << "1 ";
            }
            cout << endl;
        } 
        else if (k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO" << endl;
        } 
        else {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            if (n % 2 == 1) {
                cout << "3 ";
            } else {
                cout << "2 ";
            }
            for (int i = 0; i < (n / 2 - 1); i++) {
                cout << "2 ";
            }
         }
            cout << endl;
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