// Happy Code
// Complexity time O(N2)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N; // 3 
    int i=1;
    while(i<=N){
    	long long n1,n2,max=0,min=0;
    	cin>>n1>>n2;
       max=(n1>=n2)?n1:n2;
       min=(n1<=n2)?n1:n2;
       min--;
       long long result1=min*(min+1)/2;
       long long result2=max*(max+1)/2;
       cout<<result2-result1<<endl;
       i++;
    }
    return 0;
}
