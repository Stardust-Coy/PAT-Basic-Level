#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	string s;
	int pp,pt;
	bool judgee;
	for (int i=1;i<=n;i++){
		judgee=0;
		cin>>s;
		pp=s.find("P");
		pt=s.find("T");
		if(pt>=pp+2)judgee=1;
		for(int j=0;j<pp;j++){
			if(s[j]!='A')judgee=0;
		}
		for(int j=pp+1;j<pt;j++){
			if(s[j]!='A')judgee=0;
		}
		for(int j=pt+1;j<s.size();j++){
			if(s[j]!='A')judgee=0;
		}
		if((judgee)&&((s.size()-pt-1)==(pt-pp-1)*(pp)))cout<<"YES"<<endl;
			else cout<<"NO"<<endl;//judgee�ж�APATA�Ƿ���� ��һ���ж��Ƿ����ɷ������仯���� 
	}
	return 0;
}
