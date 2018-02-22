/*
	SubmissionId	:	17285308
	ContestId	:	631
	Index	:	A
	ProblemName	:	Interview
	ProblemTags	:	['brute force', 'implementation']
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
	long long int n,i,j,k,s=0,as,bs;
	cin>>n;
	long long int a[n],b[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cin>>b[i];
	for(i=0;i<n;i++)
	{
		as=0;
		bs=0;
		for(j=i;j<n;j++)
		{
			as=as|a[j];
			bs=bs|b[j];
			if((as+bs)>s)
			s=as+bs;
		}
		
	}
	cout<<s;
	return 0;
}