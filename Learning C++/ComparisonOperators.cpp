#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

#define ZOOM ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ZOOM;

    // comparision operators we can add pairs to vectors as well
    vector<pair<int , int > > v;
    v.push_back({2,3});
    v.push_back({1,1});
    v.push_back({2,2});
    v.push_back({3,4});

    /* sorts the added pair with respect to the first element in the pair and if the first element
        are same then sorts them according to the second element
    */
    sort(v.begin() , v.end());


    for(auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }

    // we can also add tuples to vectors
    vector<tuple<int , int , int >> vt; 

    vt.push_back({1,2,3});
    vt.push_back({2,1,3});
    vt.push_back({1,1,2});
    vt.push_back({2,2,3});

    sort(vt.begin() , vt.end());

    // tuples are accessed as get<0>(i) , get<1>(i) , get<2>(i);
    for(auto i : vt)cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << endl;

    return 0;

}