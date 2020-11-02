#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int i=0,n;
	cin>>n;
	while (n!=1){
		i++;
		if(n%2==0)n/=2;
			else n=(n*3+1)/2;
	}
	cout<<i<<endl;
	return 0;
}
