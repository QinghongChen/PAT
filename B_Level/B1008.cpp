#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i = n-m%n; i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0; i<(n-m%n);i++){
        cout<<a[i];
        if(i!=(n-m%n-1))
            cout<<" ";
    }

    return 0;
}
