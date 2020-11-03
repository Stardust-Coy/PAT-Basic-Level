#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int T;
	cin>>T;
	long long a,b,c; 
	for(int i=1;i<=T;i++){
		cin>>a>>b>>c;
		if(a+b>c)cout<<"Case #"<<i<<": true"<<endl;
			else cout<<"Case #"<<i<<": false"<<endl;			
	} 
	return 0;
}
