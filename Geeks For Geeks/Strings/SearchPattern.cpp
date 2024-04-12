// Created by Anurag Bhatt on 04/03/24.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

vector<int> search(string text , string pattern)
{
    vector<int>ans;

    int n = text.size() , m = pattern.size();

    for(int i = 0 ; i < n ; ++i)
    {
        if(text[i] == pattern[0])
        {
            if(text.substr(i , m) == pattern)
                ans.push_back(i+1);
        }
    }

    return ans;
}


/*----------------------------------------------------------------------------------------*/

int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif

   string pattern , text; cin >> pattern >> text;

   auto v = search(pattern , text);

   for(auto i : v)
   {
        cout << i << " ";
   }

   return 0;

}