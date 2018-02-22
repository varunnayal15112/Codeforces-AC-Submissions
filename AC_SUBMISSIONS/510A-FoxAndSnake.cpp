/*
	SubmissionId	:	17297067
	ContestId	:	510
	Index	:	A
	ProblemName	:	Fox And Snake
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
	//ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int i,j,n,m;
	cin>>n>>m;
	char a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i%2==0)
			a[i][j]='#';
			else
			a[i][j]='.';
		}
	}
	long long int k=0;
	for(i=1;i<n;i+=2)
	{
		if(k%2==0)
		{
			a[i][m-1]='#';
			k+=1;	
		}
		else
		{
			a[i][0]='#';
			k+=1;
		}
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cout<<a[i][j];
		cout<<"\n";
	}	
	return 0;
}
