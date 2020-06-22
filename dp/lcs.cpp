#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	string s1;
	cin>>s;
	cin>>s1;
	int n=s.length();
	int m=s1.length();
	int lis[n][m];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0 || j==0)
			  lis[i][j]=0;
			else if(s[i]==s1[j])
			  lis[i][j]=1+lis[i-1][j-1];
			else
			 lis[i][j]=max(lis[i-1][j],lis[i][j-1]);
		}
	}
	cout<<lis[n][m];
	
}
