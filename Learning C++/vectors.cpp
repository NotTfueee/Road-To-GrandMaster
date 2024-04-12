#include <iostream>
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

    // vectors and there methods 


    // vectors can be initialized as arrays as well 
    vector<int> v = { 111 , 2, 3, 5, 5};

    // to insert elements at the end of vector 
    v.push_back(10);
    v.push_back(1);
    v.push_back(11);

    // to access an element at the start of the vector
    cout << v.front() << endl;
    // to access an element at the end of the vector
    cout << v.back() << endl;

    /* to iterate over a vector we cannot use the normal for loop either we have to use auto 
    (same as java's var keyword)
     as it is used for type inference, allowing the compiler to automatically deduce the type of a 
     variable based on its initializer.  

     when iterating over vectors we are given pointer to the element but not the actual element and
     in order to print the element or to access the element we use the dereferencing operator i.e
     ---*--- which is used to access the element to which the current pointer is poiting
    */

    // the .size() method for vectors returns a unsigned int so we need to use an unsigned int to store that value
    unsigned int n = v.size();

    for(auto it = v.begin() ; it != v.end() ; ++it)
    {
        cout << *it << " ";
    }

    // to remove an element from the end of the vector 
    v.pop_back();
    cout << endl << v.back() << endl;


    // to remove all the elements from the vector 
    v.clear();

    cout << v.size() << " size of the vector"<< endl;


    return 0;
}