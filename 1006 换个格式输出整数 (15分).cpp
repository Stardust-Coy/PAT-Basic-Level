#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int k=0,a[105];
	while(n){
		a[++k]=n%10;
		n/=10;
	}
	for(int i=k;i>=1;i--){
		for(int j=1;j<=a[i];j++){
			if(i==3)cout<<"B";
			if(i==2)cout<<"S";
			if(i==1)cout<<j;
		}
	}
	cout<<endl;
	return 0;
}
