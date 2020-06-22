#include<bits/stdc++.h>
using namespace std;
int main()
{
	int w[]={3,4,5,6},p[]={2,3,4,1},we=8;
	int n=sizeof(w)/sizeof(w[0]);

	int dp[n+1][we+1];
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=we;j++){
			if(i==0||j==0){
				dp[i][j]=0;
			}
			else if(w[i-1]<=j){
			dp[i][j]=max(p[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
		}
		else{
			dp[i][j]=dp[i-1][j];
		}
		}
	}
	cout<<dp[n][we];
}
