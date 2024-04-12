// Created by Anurag Bhatt on 04/03/24.

#include <iostream>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    long long n , k , x ;
    cin >> n >> k >> x;

    long long sum = (n *(n + 1)) >> 1;

    cout << su

    long long lowerlimit = ( k * (k + 1)) >> 1;

    long long higherlimit = sum - (((n - k) * ( n - k + 1)) >> 1);

    if(x >= ll && x <= hl)cout << "YES" << endl;
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

   while(t--) solve();
   return 0;

}