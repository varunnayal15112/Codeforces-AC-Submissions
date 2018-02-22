/*
	SubmissionId	:	18520938
	ContestId	:	149
	Index	:	A
	ProblemName	:	Business trip
	ProblemTags	:	['greedy', 'implementation', 'sortings']
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

long long int fast_pow(long long int value,long long int power)
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
	long long int p,r,t,i,j,k,n,m,x,y,z,a,b,c,s;
	cin>>k;
	long long int q[12];
	for(i=0;i<12;i++)
	cin>>q[i];	
	if(k==0)
	{
		cout<<"0";
		return 0;
	}
	sort(q,q+12);
	m=0;
	for(i=11;i>=0;i--)
	{
		if(q[i]>=k)
		{
			m+=1;
			cout<<m;
			return 0;
		}
		else
		{
			k-=q[i];
			m+=1;
		}
	}
	cout<<"-1";
	



	return 0;
}









