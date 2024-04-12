// Created by Anurag Bhatt on 04/03/24.

#include <iostream>
#include <string>


using namespace std;

#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int minimumLength(string s)
{

    int n = s.size();
    if(s[0] != s[n-1])return n;

    int r = n -1 , i = 0;

    for(; i < n && i < r ; ++i)
    {
        if(s[i] == s[r])
        {
            char item = s[i];

            while(i < r && s[i] == item)
            {
                i++;
            }

            i--;

            while(r > i && s[r] == item)
            {
                r--;
            }
        }
        else break;
    }

    return r-i+1;
}


int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   string s;
   cin >> s;

   cout << minimumLength(s) << endl;

   return 0;

}