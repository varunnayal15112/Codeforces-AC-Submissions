/*
	SubmissionId	:	17373171
	ContestId	:	479
	Index	:	A
	ProblemName	:	Expression
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
	long long int a,b,c;
	cin>>a>>b>>c;
	long long int r[4];
	r[0]=a+b+c;
	r[1]=(a+b)*c;
	r[2]=a*(b+c);
	r[3]=a*b*c;
	sort(r,r+4);
	cout<<r[3];
	
	return 0;
}

