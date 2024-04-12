#include <iostream>
#include <vector>
#include <map>

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

    // map and its methods all things are same in map whether be it ordered map or unordered map
    map<int , int > map;

    // map stores the data in key value pairs 
    for(auto it = v.begin() ; it != v.end() ; ++it)
    {
        // to update the values of the key in the map 
        map[*it]++;
    }

    // to iterate through the map same as iterating through the vectors
    for(auto it = map.begin() ; it != map.end() ; ++it)
    {
        // using both the ways we can access the key value pairs in a map
        // cout << (*it).first << " " << (*it).second << endl;
        cout << it-> first << " " << it->second << endl;
    }

    // to find if an element is present in the map or not 
    bool isPresent = map.find(-1) != map.end();
    /* if the value of isPresent is true means that the element is not present in the map as the
        iterator is pointing to the end of the map meaning the element is not present and if the
        value is present then the iterator will point to any other location rather than the end 
    */

    if(isPresent)cout << "element is present";
    else cout << "element is not present";

    // to erase an element from the map 
    map.erase(3);


    return 0;

}