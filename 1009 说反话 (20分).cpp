#include<bits/stdc++.h>
using namespace std;
struct Str{
	string s;
};
int main(){
	ios::sync_with_stdio(false);
	Str a[105];
	string s1;
	getline(cin,s1);
	int pkong=s1.find(" "),k=0;
	while(pkong!=string::npos){
		a[++k].s=s1.substr(0,pkong);
		s1=s1.erase(0,pkong+1);
		pkong=s1.find(" ");
	}
	a[++k].s=s1;
	for(int i=k;i>=2;i--){
		cout<<a[i].s<<" ";
	}
	cout<<a[1].s<<endl;
	return 0;
}
