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

