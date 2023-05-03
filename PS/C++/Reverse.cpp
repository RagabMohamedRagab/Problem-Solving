//Happy Code
//time Complexity O(N)
// Space complexity + Auxiliary space =O(1)
#include<bits/stdc++.h>
using namespace std;
void Fun(string str,int s,int l,bool IsSpace) {
    for(int j=s; j>=l; j--) {
        cout<<str[j];
    }
    if(IsSpace) {
        cout<<" ";
    }
}
int main()
{
    string s;
    getline(cin,s);
    int b=0,pervious=0;
    bool IsSpace=true;
    while(b<s.size()) {
        if(s[b]==' ') {
            Fun(s,b-1,pervious,IsSpace);
            pervious=b+1;
        }
        if(b==s.size()-1) {
            IsSpace=false;
            Fun(s,b,pervious,IsSpace);}
        b++;
    }

    return 0;
}
