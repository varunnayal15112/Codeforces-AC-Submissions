/*
	SubmissionId	:	17357315
	ContestId	:	549
	Index	:	A
	ProblemName	:	Face Detection
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286
using namespace std;
bool isprime(ull n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ull i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int n,m,i,j,k,cnt=0;
	cin>>n>>m;
	char p[n][m];
	for(i=0;i<n;i++)
	cin>>p[i];
	if(n<2||m<2)
	{
		cout<<"0";
		return 0;
	}
	long long int f,a,c,e;
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(m-1);j++)
		{
			f=0,a=0,c=0,e=0;
			if(p[i][j]=='x'||p[i][j+1]=='x'||p[i+1][j]=='x'||p[i+1][j+1]=='x')
			continue;
			if(p[i][j]=='f'||p[i][j+1]=='f'||p[i+1][j]=='f'||p[i+1][j+1]=='f')
			f+=1;
			if(p[i][j]=='a'||p[i][j+1]=='a'||p[i+1][j]=='a'||p[i+1][j+1]=='a')
			a+=1;
			if(p[i][j]=='c'||p[i][j+1]=='c'||p[i+1][j]=='c'||p[i+1][j+1]=='c')
			c+=1;
			if(p[i][j]=='e'||p[i][j+1]=='e'||p[i+1][j]=='e'||p[i+1][j+1]=='e')
			e+=1;
			if(f==1&&a==1&&c==1&&e==1)
			cnt+=1;
		}
	}
	cout<<cnt;
	return 0;
}

