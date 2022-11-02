#include<bits/stdc++.h>
using namespace std;
int main(){
	const string USER ="1423009306";
	const string PWD ="jiang123";
	string user;
	string pwd;
	cout<<"用户名:";
	cin>>user;
	cout<<"密码:";
	cin>>pwd;
	if (user == USER && pwd == PWD){
		cout<<"亲爱的小朋友,欢迎您!"<<endl;
		}
	else{
		cout<<"用户名或密码不正确,请再输一次:"<<endl;
		cout<<"用户名:";
	    cin>>user;
		cout<<"密码:";
		cin>>pwd;
		if (user == USER && pwd == PWD){
			cout<<"亲爱的小朋友,欢迎您!";}
		else{
			cout<<"两次都错误";}
		}
		
	return 0;
}
