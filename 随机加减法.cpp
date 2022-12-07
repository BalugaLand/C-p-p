#include<bits/stdc++.h>
using namespace std;
int main() {
	srand(time(0));
	int x,y,symbol,ans;
	int n,temp,sum=0;
	for (int i=1; i<=10; i++) {
		x=rand()%9+1;
		y=rand()%9+1;
		symbol = rand()%2;
		if(x<y && symbol==1) {
			temp=x;
			x=y;
			y=temp;
		}
		switch(symbol) {
			case 0:
				ans=x+y;
				cout<<x<<"+"<<y<<"=";
				break;
			case 1:
				ans=x-y;
				cout<<x<<"-"<<y<<"=";
		}
		cin>>n;
		if(n==ans) {
			sum+=10;
			cout<<"正确!"<<endl;
		} else
			cout<<"错误!"<<endl;
	}
	cout<<"分数是"<<sum<<endl;
	return 0;
}
