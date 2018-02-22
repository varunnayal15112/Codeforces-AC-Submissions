/*
	SubmissionId	:	17387787
	ContestId	:	339
	Index	:	B
	ProblemName	:	Xenia and Ringroad
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
	long long int n,m;
	cin>>n>>m;
	long long int i,j,k=1,t=0;
	for(i=0;i<m;i++)
	{
		cin>>j;
		if(j>=k)
		{
			t+=j-k;
			k=j;
		}
		else
		{
			t+=n-k+j;
			k=j;
		}
	}
	cout<<t;
	return 0;
}

