#include<bits/stdc++.h>
using namespace std;
int main(){
	float weight,height,BMI;
	cout<<"请输入体重(kg):";
	cin>>weight;
	cout<<"请输入身高(m):";
	cin>>height;
	BMI = weight/pow(height,2);		// pow(变量,指数) 	相当于  height*height
	if (BMI<18.5){
		cout<<"偏瘦"<<endl;
	}
	else if (BMI>=18.5&&BMI<=23.9){
		cout<<"正常"<<endl;
	}
	else if(BMI>=24&&BMI<=27.9){
		cout<<"偏胖"<<endl;
	}
	else if (BMI>=28&&BMI<=39.9){
		cout<<"肥胖"<<endl;
	}
	else 
		cout<<"极重度肥胖"<<endl;
	

	return 0;
}
