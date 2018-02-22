/*
	SubmissionId	:	17396476
	ContestId	:	92
	Index	:	A
	ProblemName	:	Chips
	ProblemTags	:	['implementation', 'math']
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
	long long int n,m;
	cin>>n>>m;
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	long long int i,j=1,a[m];
	for(i=0;i<m;i++)
	{
		if(i==0)
		{
			a[i]=j;
			j+=1;
		}
		else
		{
			if(j==n+1)
			j=1;
			a[i]=j+a[i-1];
			j+=1;
		}
	}
	for(i=0;i<m;i++)
	{
		if(a[i]>m)
		{
			cout<<m-a[i-1];
			return 0;
		}
		else if(a[i]==m)
		{
			cout<<"0";
			return 0;
		}
	}
	return 0;
}