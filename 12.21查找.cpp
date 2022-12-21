#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=10,x=4,a[7]={1,2,3,4,5,6,7};
	int left = 0 ,right =n - 1;
	int find = n ;
	while(left <= right){
		int mid = (left + right) / 2;
		if (a[mid] == x){
			find = mid;
			break;
		}
		if (x<a[mid]) right = mid - 1;
		if (a[mid] < x)	left = mid + 1;
	}
if (find != n ){
	cout<<find<<endl;}
else{
	cout<<"not find"<<endl;
}
	return 0;
}
