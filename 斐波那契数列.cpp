#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a1,a2,a3;
	a1=a2=1;
	cout<<setw(5)<<a1;
	cout<<setw(5)<<a2;
	for(int i=3;i<=10;i++){
		a3=a1+a2;
		cout<<setw(5)<<a3;
		a1=a2;
		a2=a3;
	}

	return 0;
}
