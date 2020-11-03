#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n,m;
	bool diyi=1,b=1;//b控制空格 diyi看是否为第一个m 
	while(cin>>n>>m){
		if((diyi)&&(m==0)){
			cout<<"0 0"<<endl;
			return 0;
		}
		diyi=0;
		if(m!=0){
			if(b){
				cout<<n*m<<" "<<m-1;
				b=0;
			}else{
				cout<<" "<<n*m<<" "<<m-1;
			}
		}
	}
	cout<<endl;
	return 0;
}
