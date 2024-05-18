//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{
       long long H;
    cin >> H;

    int day = 0;
    long long height = 0;

   
    while (true) {
        height = (1LL << day) - 1; 
        if (height > H) {
            cout << day << endl;
            break;
        }
        day++;
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
    while(t--)solve();
}
