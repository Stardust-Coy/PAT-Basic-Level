#include <bits/stdc++.h>
using namespace std;
struct Student{
	string xingming,xuehao;
	int grade;
};
int main(){
	ios::sync_with_stdio(false);
	int n,minn=1000010,maxx=-1,pmax=0,pmin=0;//maxx��minn�ֱ�Ϊ��ǰ���ֵ����Сֵ��pmax��pmin�ֱ�Ϊ���ֵ����Сֵ��λ�� 
	Student a[10010]; 
	cin>>n; 
	for(int i=1;i<=n;i++){
		cin>>a[i].xingming>>a[i].xuehao>>a[i].grade;
		if(a[i].grade>maxx){
			maxx=a[i].grade;
			pmax=i;
		}
		if(a[i].grade<minn){
			minn=a[i].grade;
			pmin=i;
		}
	}
	cout<<a[pmax].xingming<<" "<<a[pmax].xuehao<<endl;
	cout<<a[pmin].xingming<<" "<<a[pmin].xuehao<<endl;
	return 0;
}
