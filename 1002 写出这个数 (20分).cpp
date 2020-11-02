#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	string s;
	getline(cin,s);
	int sum=0;
	for (int i=0;i<s.size();i++){
		sum+=(int)(s[i]-'0');
	}
	int k=0,a[1050]={0};
	while(sum){
		a[++k]=sum%10;
		sum/=10;
	}
	for(int i=k;i>=2;i--){
		switch(a[i]){
			case 1:{
				cout<<"yi ";
				break;
			}
			case 2:{
				cout<<"er ";
				break;
			}
			case 3:{
				cout<<"san ";
				break;
			}
			case 4:{
				cout<<"si ";
				break;
			}
			case 5:{
				cout<<"wu ";
				break;
			}
			case 6:{
				cout<<"liu ";
				break;
			}
			case 7:{
				cout<<"qi ";
				break;
			}
			case 8:{
				cout<<"ba ";
				break;
			}
			case 9:{
				cout<<"jiu ";
				break;
			}
			case 0:{
				cout<<"ling ";
				break;
			}
		}
	}
	switch(a[1]){
		case 1:{
			cout<<"yi"<<endl;
			break;
		}
		case 2:{
			cout<<"er"<<endl;
			break;
		}
		case 3:{
			cout<<"san"<<endl;
			break;
		}
		case 4:{
			cout<<"si"<<endl;
			break;
		}
		case 5:{
			cout<<"wu"<<endl;
			break;
		}
		case 6:{
			cout<<"liu"<<endl;
			break;
		}
		case 7:{
			cout<<"qi"<<endl;
			break;
		}
		case 8:{
			cout<<"ba"<<endl;
			break;
		}
		case 9:{
			cout<<"jiu"<<endl;
			break;
		}
		case 0:{
			cout<<"ling"<<endl;
			break;
		}
	}
	return 0;
}
