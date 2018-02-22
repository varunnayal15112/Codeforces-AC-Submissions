/*
	SubmissionId	:	19569344
	ContestId	:	148
	Index	:	A
	ProblemName	:	Insomnia cure
	ProblemTags	:	['constructive algorithms', 'implementation', 'math']
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
	long long int d,f,cnt,len,p,q,r,t,i,j,k,l,x,n,m,y,z,b,c,s;
	ll ar[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	cin>>k>>l>>m>>n>>d;
	x=0;
	for(i=1;i<=d;i++)
	{
		if(i%k!=0&&i%l!=0&&i%m!=0&&i%n!=0)
		{
			x+=1;
		}
	}
	cout<<d-x;
	
	
	return 0;
}
