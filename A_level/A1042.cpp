#include <iostream>

using namespace std;

const int n = 54;
char mp[5] = {'S','H','C','D','J'};
int Start[n+1],End[n+1],Next[n+1];

int main()
{
    int k;
    cin>>k;
    for(int i=1;i<=n;i++){
        Start[i] = i;
    }
    for(int i=1;i<=n;i++){
        cin>>Next[i];
    }

    for(int step =0; step<k;step++){
        for(int i=1;i<=n;i++){
            End[Next[i]]=Start[i];
        }
        for(int i=1;i<=n;i++){
            Start[i] = End[i];
        }
    }

    for(int i=1;i<=n;i++){
        if(i!=1) cout<<" ";
        Start[i]--;
        cout<<mp[Start[i]/13]<<(Start[i]%13+1);
    }

    return 0;
}
