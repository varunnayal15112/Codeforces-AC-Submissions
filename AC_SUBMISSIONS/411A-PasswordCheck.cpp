/*
	SubmissionId	:	19880865
	ContestId	:	411
	Index	:	A
	ProblemName	:	Password Check
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/


#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286
#define mod 1000000007
using namespace std;
bool isprime(ull n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ull i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

long long int gcd(long long int a,long long int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}

long long int exp(long long int value,long long int power)
{
	long long int result=1;
	while(power>0)
	{
		if(power&1LL)
		{
			result*=value;
			result%=mod;
		}
		value*=value;
		value%=mod;
		power/=2LL;
	}
	return result;
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int f,cnt,len,p,q,r,t,i,j,k,l,n,m,x,y,z,b,c,s;
	string a;
	cin>>a;
	ll d=0,uc=0,lc=0;
	if(a.size()<5)
	{
		cout<<"Too weak";
		return 0;
	}    
	for(i=0;i<a.size();i++)
	{
		if(a[i]>=65&&a[i]<=90)
		uc=1;
		else if(a[i]>=97&&a[i]<=122)
		lc=1;
		else if(a[i]>=48&&a[i]<=57)
		d=1;
	}
	if(lc==1&&uc==1&&d==1)
	cout<<"Correct";
	else
	cout<<"Too weak";


	return 0;
}

