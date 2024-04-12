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

    string time;
    time.push_back(s[0]);
    time.push_back(s[1]);

    int t = stoi(time);

    string ap;

    if (t > 12) {
        t -= 12;
        ap = "PM";
    } else if (t == 0) {
        t = 12;
        ap = "AM";
    } else {

      if(t >= 12)ap = "PM";
      else ap = "AM";
    }

    string ans;

    if(t < 10)ans.push_back(48);
    ans += to_string(t);
    ans.push_back(s[2]);
    ans.push_back(s[3]);
    ans.push_back(s[4]);
    ans.push_back(' ');
    ans += ap;

    cout << ans << endl;

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
   while(t--) solve();
   return 0;
}