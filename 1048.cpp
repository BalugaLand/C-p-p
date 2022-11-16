//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int a,b,n;
//	cin>>a>>b;
//	if (a<60&&b>=60 || a>=60&&b<60)
//		n = 1;
//	else
//		n = 0;
//	cout<<n;
//	return 0;
//}




#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	bool b1 = a<60,b2 = b<60;
	if (b1+b2==1)
		cout<<1;
	else
		cout<<0;
}
