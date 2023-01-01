//Happy Code
//time Complexity O(N)
// Space complexity + Auxiliary space =O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin>>Q;
    int b=1;
    while(b<=Q) {
        int w,h;
        cin>>w>>h;
        if(w==h) {
            cout<<"Square"<<endl;
        } else {
            cout<<"Rectangle"<<endl;
        }
        b++;
    }
    return 0;
}
