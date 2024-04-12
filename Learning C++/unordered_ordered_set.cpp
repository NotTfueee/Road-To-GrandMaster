#include <iostream>
#include <vector>
#include <set>

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

    vector<int> v = { 1, 2, 11 ,3 , 1, 2, 3, 4, 4, 5, 6, 7, 7, 10};

    // set and its methods all things are same in map whether be it ordered set or unordered set
    set<int> set;

    // set stores the data only once if it is not present in the set 
    for(auto it = v.begin() ; it != v.end() ; ++it)
    {
        set.insert(*it);
    }

    //to iterate through the elements in the set , same as iterating through vectors
    for(auto it = set.begin() ; it != set.end() ; ++it)
    {
        cout << *it << endl;
    }

    // unsigned int is used to store the size of the set as the value can never be negative 
    int n = set.size();
    cout << n  << endl;

    // remove an element from the set if it is present 
    bool isPresent = set.find(9) == set.end();

    if(isPresent) cout << "element not found" << endl;
    else cout << "element found " << endl;

    // to remove an element 
    set.erase(10);

    // we can also count the number of elements with a certain values 
    cout << set.count(2) << endl;

    return 0;

}