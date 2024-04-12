// Created by Anurag Bhatt on 04/03/24.

#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/


void print(vector<int> a)
{

    for(auto i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    return;
}

void solve()
{
    long long n , k ;
    cin >> n >> k;

    if(n >= k && n % k == 0)
    {
        cout << 1 << endl;
    }
    else if(n > k )
    {
        cout << 2 << endl;
    }
    else if(n < k && k % n == 0)
    {
        cout << k / n << endl;
    }
    else
    {
        cout << (k / n ) + 1 << endl;
    }

}


/*----------------------------------------------------------------------------------------*/

int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   int t ;
   cin >> t;
   while(t-- )solve();

   return 0;

}