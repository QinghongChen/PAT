#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, num, A1 = 0, A2 = 0, A5 = 0;
    double A4 = 0.0;
    cin >> n;
    vector<int> v[5];
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[num%5].push_back(num);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (i == 0 && v[i][j] % 2 == 0) A1 += v[i][j];
            if (i == 1 && j % 2 == 0) A2 += v[i][j];
            if (i == 1 && j % 2 == 1) A2 -= v[i][j];
            if (i == 3) A4 += v[i][j];
            if (i == 4 && v[i][j] > A5) A5 = v[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i != 0) printf(" ");
        if (i == 0 && A1 == 0 || i != 0 && v[i].size() == 0) {
            printf("N"); continue;
        }
        if (i == 0) printf("%d", A1);
        if (i == 1) printf("%d", A2);
        if (i == 2) printf("%d", v[2].size());
        if (i == 3) printf("%.1f", A4 / v[3].size());
        if (i == 4) printf("%d", A5);
    }
    return 0;
}


/*
#include <iostream>
using namespace std;

int main(){
	int n;
	//cin>>n;
	scanf("%d",&n); 
	int a1 = 0,a2 = 0,a3 = 0,a4Sum = 0,a4Num = 0, a5 = -1; 
	int temp = 1;
	for(int i = 0;i<n;i++){
		int m;
		scanf("%d",&m); 
		switch(m%5){
			case 0:{
				if(m%2==0){
					a1+=m;
				}
				break;
			}
			case 1:{
				a2+=temp*m;
				temp = -1*temp;
				break;
			}
			case 2:{
				a3++;
				break;
			}
			case 3:{
				a4Sum+=m;
				a4Num++;
				break;
			}
			case 4:{
				if(m>a5){
					a5 = m;
				}
				break;
			}
		}
	}
	if(a1==0){
		printf("N ");
	}else{
		printf("%d ",a1);
	}
	if(a2==0){
		printf("N ");
	}else{
		printf("%d ",a2);
	}
	if(a3==0){
		printf("N ");
	}else{
		printf("%d ",a3);
	}
	if(a4Num==0){
		printf("N ");
	}else{
		printf("%.1f ",float(a4Sum)/a4Num);
	}
	if(a5==-1){
		printf("N ");
	}else{
		printf("%d ",a5);
	}
		
	//printf("%d %d %d %.1f %d",a1,a2,a3,float(a4Sum)/a4Num,a5);
	return 0;
}
*/

