// Created by Anurag Bhatt on 04/03/24.
 
#include <bits/stdc++.h>

using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
/*----------------------------------------------------------------------------------------*/
void solve()
{
   string s;
    cin >> s;

    map<char, int> freqMap;

    for (auto c : s)
        freqMap[c]++;

    map<int, vector<char>> check;

    for (auto i : freqMap) {
        int key = i.second;
        char val = i.first;
        check[key].push_back(val);
    }

    for(auto i : check)
    {
      if(i.second.size() != 0 && i.second.size() != 2)
      {
         cout << "No" << endl;
         return;
      }
    }

    cout << "Yes" << endl;
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