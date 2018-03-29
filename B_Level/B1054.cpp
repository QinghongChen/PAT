//#include <iostream>
//#include <cmath>
//using namespace std;
#include <cstdio>
#include <cmath>

int main()
{
    int n;
    //cin>>n;
    scanf("%d",&n);
    double maxRadius = 0;
    for(int i=0;i<n;i++){
        int a,b;
        //cin>>a>>b;
        scanf("%d%d",&a,&b);
        double radius = sqrt(a*a+b*b);
        if(radius>maxRadius){
            maxRadius = radius;
        }
    }
    printf("%.2f",maxRadius);
    return 0;
}
