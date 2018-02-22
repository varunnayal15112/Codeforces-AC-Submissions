/*
	SubmissionId	:	17386477
	ContestId	:	313
	Index	:	A
	ProblemName	:	Ilya and Bank Account
	ProblemTags	:	['implementation', 'number theory']
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
	if(n>=0)
	{
		cout<<n;
		return 0;
	}
	long long int o,t;
	o=n%10;
	//cout<<o<<"\n";
	t=(n/10)%10;
	//cout<<t;
	if((-o)<=(-t))
	{
		n=n/100;
		n=n*10+o;
	}
	else
	{
		n=n/10;
	}
	cout<<n;
	return 0;
}

