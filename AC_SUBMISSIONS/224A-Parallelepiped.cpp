/*
	SubmissionId	:	17340024
	ContestId	:	224
	Index	:	A
	ProblemName	:	Parallelepiped
	ProblemTags	:	['brute force', 'math']
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
	long long int ab,bc,ca,p,a,b,c;
	cin>>ab>>bc>>ca;
	a=sqrt(ab*ca/bc);
	b=sqrt(ab*bc/ca);
	c=sqrt(bc*ca/ab);
	p=4*(a+b+c);
	cout<<p;
	return 0;
}

