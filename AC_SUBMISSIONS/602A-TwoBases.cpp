/*
	SubmissionId	:	17370861
	ContestId	:	602
	Index	:	A
	ProblemName	:	Two Bases
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
	long long int n,bx;
	cin>>n>>bx;
	long long int x[n],i,j,k,XN=0,YN=0;
	for(i=0;i<n;i++)
	{
		cin>>k;
		XN=XN*bx+k;
	}
	long long int m,by;
	cin>>m>>by;
	long long int y[m];
	YN=0;
	for(i=0;i<m;i++)
	{
		cin>>k;
		YN=YN*by+k;
	}
	if(XN==YN)
	cout<<"=";
	else if(XN<YN)
	cout<<"<";
	else
	cout<<">";
	return 0;
}

