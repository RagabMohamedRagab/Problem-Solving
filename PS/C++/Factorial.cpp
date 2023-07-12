#include<iostream>
using namespace std;
long long Fact(int N) {
    if(N==0|| N==1) {
        return 1 ;
    }
    return N * Fact(N-1);
}
int main()
{
    int N;
    cin>>N;
    long long result=Fact(N);
    cout<<result<<endl;
    return 0;
}
