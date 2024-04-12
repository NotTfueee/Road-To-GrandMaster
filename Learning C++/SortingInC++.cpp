#include <iostream>
#include <algorithm>
#include <vector>

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
    // sorting vectors in increasing order
    vector<int> v = {4,2,5,3,5,8,3};
    sort(v.begin() , v.end());

    for(auto i : v)cout << i << " " ;
    cout << endl;

    // sorting vectors in decreasing order
    sort(v.rbegin() , v.rend());
    for(auto i : v)cout << i << " ";
    cout << endl;

    // sorting an normal array in c++
    int n = 7;
    int a[] = {4,2,5,3,5,8,3};
    sort(a , a+n);

    for(int i : a)cout << i << " ";
        cout << endl;

    // sorting a string in c++
    string s = "monkey";
    sort(s.begin() , s.end());

    cout << s << endl;


    return 0;

}