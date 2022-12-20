#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,f[31];
	scanf("%d",&n);
	f[1]=1;f[2]=2;
	for (i=3;i<=n;i++)f[i]=f[i-1]+f[i-2];
	for (i=1;i<n;i++)printf("%d",f[i]);
	printf("%d\n",f[n]);
	return 0;
}
