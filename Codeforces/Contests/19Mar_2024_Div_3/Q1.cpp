// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   long long a, b, c;
        cin >> a >> b >> c;

        if (b % 3 == 0) {
            a += (b / 3);
            a += static_cast<long>(ceil(static_cast<double>(c) / 3));

            cout << a << endl;
            return;
        }

        a += (b / 3);

        long long remain = b % 3;

        if (remain + c < 3) {
            cout << -1 << endl;
            return;
        }

        if (remain == 1) {
            c -= 2;
            a++;
        }
        else {
            c -= 1;
            a++;
        }

        a += static_cast<long>(ceil(static_cast<double>(c) / 3));

        cout << a << endl;
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