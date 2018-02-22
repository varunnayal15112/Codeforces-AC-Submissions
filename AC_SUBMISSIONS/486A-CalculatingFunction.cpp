/*
	SubmissionId	:	18383759
	ContestId	:	486
	Index	:	A
	ProblemName	:	Calculating Function
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
	long long int n;
	cin>>n;
	if(n%2==0)
	{
		cout<<n/2;
		return 0;
	}
	n=n+1;
	n=n/2;
	n=(-1)*n;
	cout<<n;
	
	return 0;
}

