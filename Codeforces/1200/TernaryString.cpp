#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s ; 
    cin >> s;

    map<char , int> count;
    int n = s.size(), mn = INT_MAX;
    int i = 0, j = 0;

    while (j < n) 
    {
        count[s[j]]++;

        while (count['1'] && count['2'] && count['3']) {
            mn = min(mn, j - i + 1);
            count[s[i]]--;
            i++;
        }

        j++;
    }

    // If mn is still INT_MAX, it means there's no substring containing all three types of characters
    if (mn == INT_MAX)
        mn = 0;

    cout << mn << "\n";
}

int main()
{
#ifndef ONLINE_JUDGE
    //for getting the input from the input txt
    freopen("input.txt","r",stdin);
    //for printing the output to output txt
    freopen("output.txt","w",stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--)solve();

    return 0;
}