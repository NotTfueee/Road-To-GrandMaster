//File Created by -- > ANRAG
//Created On -- > 08/07/24,Mon,Jul
#include <bits/stdc++.h>
using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
vector<string> ans;
void form(int n , string temp , char last)
{
    if(n == 0)
    {
        ans.push_back(temp);
        return ;
    }

    if(last == '0')
    {
        temp.push_back('1');
        form(n - 1 , temp , '1');
    }
    else
    {
        string s = temp;
        temp.push_back('0');
        s.push_back('1');
        form(n - 1 , temp , '0');
        form(n - 1 , s ,  '1');
    }

    return ;
}

void solve()
{
    int n ; cin >> n;
    form(n-1, "" , '0');
    form(n-1, "" , '1');

    for(auto i : ans)cout << i << " ";
    cout << endl;
    return;
}
/*--------------------------------------------------------------------------------------------------------------------------------------------*/

int main() {
    ZOOM
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();
}
