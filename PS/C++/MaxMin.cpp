#include<bits/stdc++.h>
using namespace std;
void MaxMin(int A[],int size) {
    int max=A[0],min=A[0];
    for(int j=0; j<size; j++) {
        if(A[j]>=max) {
            max=A[j];
        } else if(A[j]<min) {
            min=A[j];
        }
    }
    cout<<min<<" "<<max<<endl;
}
int main()
{
    int N;
    cin>>N;
    int Arr[N];
    for(int i=0; i<N; i++) {
        cin>>Arr[i];
    }
    MaxMin(Arr,N);
    return 0;
}
