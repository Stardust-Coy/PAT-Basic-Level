#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	//ɸѡ�������� 
	bool b[100010]={0};
	b[0]=1;
	b[1]=1;
	int end=(int)(sqrt(n)); 
	for(int i=2;i<=end;i++){
		if(!b[i]){
			for (int j=i;i*j<=n;j++){
				for(int k=i*j;k<=n;k*=i){
					b[k]=1;
				}
			}
		}	
	}
	//�������� 
	int sum=0;
	for (int i=3;i<=n-2;i+=2){
		if((!b[i])&&(!b[i+2]))sum++;
	}
	cout<<sum<<endl;
	return 0;
}
