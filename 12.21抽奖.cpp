#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,a[101],n,f;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>num;
	f = 0 ;
	for(int i=1;i <= n ;i++){
		if (a[i]==num){
			f=i;
			break;
		}
	}
	cout<<f<<endl;

	return 0;
}
