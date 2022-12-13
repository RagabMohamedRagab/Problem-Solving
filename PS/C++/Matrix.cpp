//Happy Code
//time Complexity O(N)
// Space complexity + Auxiliary space =O(N)
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  N;
    cin>>N;
    long long A[N][N];
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>A[i][j];
        }
    }
    long long rsum=0,lsum=0;
    for(int a=0; a<N; a++) {
        for(int b=0; b<N; b++) {
            if(a==b) {
                lsum+=A[a][b];
            continue;
            }
            if((N-1)-a==b) {
                rsum+=A[a][b];
            continue;
            }
        }
    }
    cout<<abs(lsum-rsum)<<endl;
    return 0;
}
