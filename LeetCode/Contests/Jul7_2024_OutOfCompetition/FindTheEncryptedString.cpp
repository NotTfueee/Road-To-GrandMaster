//File Created by -- > ANRAG
//Created On -- > 10/07/24,Wed,Jul

#include <bits/stdc++.h>

using namespace std;

#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*--------------------------------------------------------------------------------------------------------------------------------------------*/
 string getEncryptedString(string s, int k) {

        int n = int(s.size());

        int rotate = k % n; 


        if(rotate == 0)return s;

        int l = 0 , r = rotate - 1;

        while(l < r)
        {
            s[l] ^= s[r];
            s[r] ^= s[l];
            s[l] ^= s[r];
            l ++;
            r--;
        }

        l = rotate , r  = n - 1;

        while(l < r)
        {
            s[l] ^= s[r];
            s[r] ^= s[l];
            s[l] ^= s[r];
            l ++ ;
            r--;
        }

        l = 0 , r = n - 1; 

        while(l < r)
        {
            s[l] ^= s[r];
            s[r] ^= s[l];
            s[l] ^= s[r];
            l++;
            r--;
        }

        return s;
    }

    
void solve()
{

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
