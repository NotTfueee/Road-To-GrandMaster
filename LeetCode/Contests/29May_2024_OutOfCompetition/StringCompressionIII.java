//// Created by Anurag Bhatt on 04/03/24.

// #include<bits/stdc++.h>
// using namespace std;
// #define ZOOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl '\n'

/*----------------------------------------------------------------------------------------*/
public String compressedString(String word) 
{

        var st = new Stack<Character>();
        StringBuilder ans = new StringBuilder();

        for(int i = 0 ; i < word.length() ; ++i)
        {
            if(st.isEmpty())
            {
                st.push(word.charAt(i));
                continue;
            }

            if(st.peek() != word.charAt(i))
            {
                int q = st.size() / 9;
                int r = st.size() % 9;

                char top = st.pop();

                for(int j = 0 ; j < q ; ++j)
                {
                    ans.append(9);
                    ans.append(top);
                }

                if(r > 0)
                {
                    ans.append(r);
                    ans.append(top);
                }
                st.clear();
            }

            st.push(word.charAt(i));
        }

        if(!st.isEmpty())
            {
                int q = st.size() / 9;
                int r = st.size() % 9;

                char top = st.pop();

                for(int j = 0 ; j < q ; ++j)
                {
                    ans.append(9);
                    ans.append(top);
                }

                if(r > 0)
                {
                    ans.append(r);
                    ans.append(top);
                }

                st.clear();
            }


        return ans.toString();
}
void solve()
{
    
}
/*----------------------------------------------------------------------------------------*/

// int main()
// {
//     ZOOM;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif


//   solve();
// }
