#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	bool b=1,cunzai[10]={0};//算A2是加还是减 1+0- 
	int a,A1=0,A2=0,A3=0,A4geshu=0,A5=0;
	float A4=0;
	for (int i=1;i<=n;i++){
		cin>>a;
		switch(a%5){
			case 0:{
				if(a%2==0){
					A1+=a;
					cunzai[1]=1;
				}
				break;
			}
			case 1:{
				if(b){
					A2=A2+a;
					b=0;
				}else{
					A2=A2-a;
					b=1;
				}
				cunzai[2]=1;
				break;
			}
			case 2:{
				A3++;
				cunzai[3]=1;
				break;
			}
			case 3:{
				A4+=a;
				A4geshu++;
				cunzai[4]=1;
				break;
			}
			case 4:{
				A5=max(A5,a);
				cunzai[5]=1;
				break;
			}
		} 
	}
	if(cunzai[1])cout<<A1<<" ";
		else cout<<"N ";
	if(cunzai[2])cout<<A2<<" ";
		else cout<<"N ";
	if(cunzai[3])cout<<A3<<" ";
		else cout<<"N ";
	if(cunzai[4])cout<<fixed<<setprecision(1)<<A4*1.0/A4geshu<<" ";
		else cout<<"N ";
	if(cunzai[5])cout<<A5<<endl;
		else cout<<"N"<<endl;		
	return 0;
}
