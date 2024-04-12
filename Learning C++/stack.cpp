#include <iostream>
#include <vector>
#include <stack>

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

    // stack and its methods 
    stack<int> st;

    for(auto it = v.begin() ; it != v.end() ; ++it)
    {
        // to push elements onto the stack we use 
        st.push(*it);
    }

    // get size
    cout << st.size() << endl;

    // to check if the stack is empty or not 
    cout << st.empty() << endl; // 0 means false 1 means true

    // to remove the element from the stack we use before that we will check the element present at the top of the stack
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    

    return 0;

}