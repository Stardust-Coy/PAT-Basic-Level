#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n,m,a[1010];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m>=n)m%=n;
	int k=n-m+1,count=0;//k�������Ƶ�ǰ���λ count�����������������
	if(k>n)k=k%n;
	if(n==1)k=1; 
	bool b=1;//�����Ƿ��ǵ�һ����� 
	while(count<n){
		if(b){
			cout<<a[k];
			b=0;
		}else cout<<" "<<a[k];
		count++;
		k++;
		if(k>n)k=k%n;
		if(k==0)k+=n;
	}
	cout<<endl;
	return 0;
}
