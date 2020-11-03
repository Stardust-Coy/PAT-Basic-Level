#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	bool b[10010]={0};
	int n;
	cin>>n;
	int x,a[10010]={0};
	for (int i=1;i<=n;i++){
		cin>>x;
		b[x]=1;
		a[x]++;
		while (x!=1){
			if(x%2==0)x/=2;
				else x=(3*x+1)/2;
			a[x]++;
		}
	}
	b[0]=1;//判断第一个输出 
	for (int i=10000;i>=1;i--){
		if((a[i]==1)&&(b[i])){
			if(b[0]){
				cout<<i;
				b[0]=0;
			}else cout<<" "<<i;
		}
	}
	return 0;
}
