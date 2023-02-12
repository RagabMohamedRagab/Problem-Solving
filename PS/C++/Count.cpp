//Happy Code
//time Complexity O(N)
// Space complexity + Auxiliary space =O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int sum=0;
    int b=0;
    while (b<str.size()) {
        sum+=str[b]-'0';
        b++;
    }
    cout<<sum<<endl;
    return 0;
}
