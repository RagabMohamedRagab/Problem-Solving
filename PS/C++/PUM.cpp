#include<bits/stdc++.h>
using namespace std;

int main()
{

    int num,j=1; //4
    cin>>num;

    for(int i=1; i<=num; i++)
    {
        cout<<j<<" "<<j+1<<" "<<j+2<<" ";
        cout<<"PUM"<<endl;
        j=j+4;
    }
}
