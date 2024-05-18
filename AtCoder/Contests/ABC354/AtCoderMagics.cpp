//// Created by Anurag Bhatt on 04/03/24.

#include<bits/stdc++.h>
using namespace std;
#define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*----------------------------------------------------------------------------------------*/

void solve()
{ 
   int n ; cin >> n ;

   vector<pair<int, pair<int , int>>> v(n);

   for(int i = 0 ; i < n ; ++i)
   {
        int s , c ; cin >> s >> c;

        v[i] = {s , {c , i}};
   }

   sort(v.begin() , v.end());

   stack<pair<int, pair<int, int>>> st;

   for(int i = 0 ; i < n ; ++i)
   {
        if(st.empty())
        {
            st.push(v[i]);
            continue;
        }

        int currS = v[i].first , currC = v[i].second.first;

        while(!st.empty() && st.top().first < currS && st.top().second.first > currC)
        {
            st.pop();
        }
        
        st.push(v[i]);
   }

   cout << st.size() << endl;

   vector<int> ans;

   while(!st.empty())
   {
    ans.push_back( st.top().second.second + 1 );
    st.pop();
   }

   sort(ans.begin() , ans.end());

   for(auto i : ans) cout << i << " " ;
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


    int t ; cin >> t;
    while(t--)solve();
}
