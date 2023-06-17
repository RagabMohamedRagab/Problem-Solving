// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int N;
double GetAverage(double Arr[]) {
    double sum=0.00;
    for(int i=0; i<N; i++) {
        sum+=Arr[i];
    }
    return sum/N;
}
int main() {
    cin>>N;
    double A[N]= {0};
    for(int a=0; a<N; a++) {
        cin>>A[a];
    }
    double result=GetAverage(A);
    cout<<setprecision(8)<<result<<endl;
    return 0;
}
