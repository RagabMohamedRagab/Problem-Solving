//Happy Code
//time Complexity O(N)
// Space complexity + Auxiliary space =O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool IsSpace=false;
    while(cin>>s) {
        reverse(s.begin(),s.end());
        if(IsSpace) {
          cout<<" ";
        }
        IsSpace=true;
        cout<<s;
    }
    return 0;
}
