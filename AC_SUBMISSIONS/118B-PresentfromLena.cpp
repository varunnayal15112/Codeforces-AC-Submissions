/*
	SubmissionId	:	18958212
	ContestId	:	118
	Index	:	B
	ProblemName	:	Present from Lena
	ProblemTags	:	['constructive algorithms', 'implementation']
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
	for(i=0;i<(n+1);i++)
	{
		for(j=i;j<n;j++)
			cout<<"  ";
		for(k=0;k<=i;k++)
			{
				if(i==0)
				cout<<"0";
				else
				cout<<k<<" ";
			}
		for(k=i-1;k>=0;k--)
			{
				if(k==0)
				cout<<"0";
				else
				cout<<k<<" ";
			}
		cout<<"\n";
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			cout<<"  ";
		for(k=0;k<=(n-i-1);k++)
			{
				if((n-i-1)==0)
				cout<<"0";
				else
				cout<<k<<" ";	
			}
		for(k=n-i-2;k>=0;k--)
			{
				if(k==0)
				cout<<"0";
				else
				cout<<k<<" ";	
			}
		
		cout<<"\n";
	}
	return 0;
}

