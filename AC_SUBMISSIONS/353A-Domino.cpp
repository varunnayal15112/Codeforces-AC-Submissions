/*
	SubmissionId	:	19881348
	ContestId	:	353
	Index	:	A
	ProblemName	:	Domino
	ProblemTags	:	['implementation', 'math']
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
    cin>>n;
    ll a[n][2],lc=0,up=0;
    for(i=0;i<n;i++)
    {
    	cin>>a[i][0]>>a[i][1];
    	up+=a[i][0];
    	lc+=a[i][1];
	}
	if((up%2==0&&lc%2!=0)||(up%2!=0&&lc%2==0))
	{
		cout<<"-1";
		return 0;
	}
	else if(up%2==0&&lc%2==0)
	{
		cout<<"0";
		return 0;
	}
	else
	{
		f=0;
		for(i=0;i<n;i++)
		{
			if((a[i][0]%2==0&&a[i][1]%2!=0)||(a[i][0]%2!=0&&a[i][1]%2==0))
			{
				f=1;
				break;
			}
		}
		if(f==0)
		cout<<"-1";
		else
		cout<<"1";
	}
	return 0;
}

