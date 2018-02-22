/*
	SubmissionId	:	17357005
	ContestId	:	144
	Index	:	A
	ProblemName	:	Arrival of the General
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
	long long int t=0,n,i,j,k,mn,mx;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	mn=0;
	mx=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>a[mx])
			mx=i;
		if(a[i]<=a[mn])
		mn=i;
	}
	if(mx>mn)
	{
		t=mx-1+(n-1)-mn;
	}
	else
		t=mx+(n-1)-mn;
		cout<<t;
	return 0;
}

