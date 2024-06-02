//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

struct Compare {
 bool operator()(const pair<char, int>& left, const pair<char, int>& right) {
        if (left.first == right.first) {
            return left.second < right.second;
        }
        return left.first > right.first;
    }
};
    string clearStars(string s) {

        priority_queue<pair<char, int>, vector<pair<char, int>>, Compare> pq;

        set<int>set;
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(s[i] == '*')
            {
                int idx = pq.top().second;
                set.insert(idx);
                set.insert(i);
                pq.pop();
            }
            else 
            {
                pq.push({s[i] , i});
            }
        }

        string ans;

        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(set.find(i) == set.end())ans.push_back(s[i]);
        }

        return ans;
        
}


void solve()
{
    
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
