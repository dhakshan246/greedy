#include<bits/stdc++.h>
using namespace std;
int max(int n,int k){
	return (n>k)?n:k;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
cin>>a[i];
}
	int dp[n];
	dp[0]=1;
	for(int i=1;i<n;i++){
		dp[i]=1;
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				dp[i]=max(dp[j]+1,dp[i]);
			}
			
		}
	}
	cout<<*max_element(dp,dp+n);
}
