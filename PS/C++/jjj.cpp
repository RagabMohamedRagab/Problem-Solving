//Happy Code
// Complexity time O(N^2)
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,min=0;
    bool flag=true;
    cin>>n;
    int a=1;
    while(a++<=n) {
        int size;
        cin>>size;
        int A[size];
        int b=0;
        while(b<size) {

            cin>>A[b];
            b++;
        }
        for(int i=0; i<size; i++) {
            for(int j=i+1; j<size; j++) {
                int res=(A[i]+A[j])+(j-i);
            
                if(flag) {
                    min=res;
                    flag=false;
                } else {
                    if(min>res) {
                        min=res;
                    }
                }
                res=0;

            }
        }
        flag=true;
 cout<<min<<endl;
    }
   


    return 0;
}
