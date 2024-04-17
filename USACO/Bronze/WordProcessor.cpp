// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
    int n , k ; cin >> n >> k ;
    vector<string> str(n);
    vector<int>v(n , 0);

    for(int i = 0 ; i < n ; ++i)
    {
        string s ; cin >> s;
        str[i] = s;
        v[i] = s.size();
    }

    int i = 0;

    while(i < n)
    {
        int sum = 0;
        bool firstWordInLine = true;

        while(i < n)
        {
            sum += v[i];

            if(sum <= k)
            {
                if (!firstWordInLine) {
                    cout << " ";
                }
                cout << str[i];
                i++;
                firstWordInLine = false;

                if(i >= n)break;
            }
            else break;
        }
        if(i >= n)break;
        cout << endl;
    }
}
/*----------------------------------------------------------------------------------------*/
 
int main()
{
   ZOOM;
#ifndef ONLINE_JUDGE
   freopen("word.in","r",stdin);
   freopen("word.out","w",stdout);
#endif

   solve();
}
