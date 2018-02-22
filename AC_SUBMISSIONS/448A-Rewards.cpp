/*
	SubmissionId	:	17382716
	ContestId	:	448
	Index	:	A
	ProblemName	:	Rewards
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
	long long int a1,a2,a3,b1,b2,b3,n,n1,i,j,k;
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	cin>>n;
	long long int a,b;
	n1=0;
	a=a1+a2+a3;
	b=b1+b2+b3;
	if(a!=0)
	{
		if(a%5==0)
		n1+=a/5;
		else
		n1+=(a/5)+1;
	}
	if(b!=0)
	{
		if(b%10==0)
		n1+=b/10;
		else
		n1+=(b/10)+1;
	}
	if(n1<=n)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}

