//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/
void solve()
{
    string s ; cin >> s;


    int left = 0;
    for(int i = 0 ; i <= 1 ; ++i)
    {
        if(s[i] == '1')left += 10;
    }

    left ++;

    int right = 0;
    for(int i = 2 ; i <= 3 ; ++i)
    {
        if(s[i] == '1')right += 10;
    }

    right ++;

    cout << left * right << endl;
    return;
}
/*----------------------------------------------------------------------------------------*/

int main()
{
    ZOOM;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


  solve();
}
