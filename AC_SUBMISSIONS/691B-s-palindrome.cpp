/*
	SubmissionId	:	20386893
	ContestId	:	691
	Index	:	B
	ProblemName	:	s-palindrome
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
	long long int f,cnt,len,p,q,t,i,j,k,n,m,x,y,z,b,c,s;
	string a;
	cin>>a;
	char l[19]={'A','b','H','I','M','O','o','T','U','V','v','W','w','X','x','Y','p','q','d'};
	char r[19]={'A','d','H','I','M','O','o','T','U','V','v','W','w','X','x','Y','q','p','b'};
	n=a.size();
	if(a.size()%2==0)
	{
		f=0;
		for(i=0;i<(a.size()/2);i++)
		{
			x=0;
			for(j=0;j<19;j++)
			{
				if(l[j]==a[i])
				{
					x=1;
					if(a[n-i-1]!=r[j])
					{
						f=1;
						break;	
					}	
				}
				
			}
			if(x==0)
			{
				cout<<"NIE";
				return 0;		
			}
			if(f==1)
			{
				cout<<"NIE";
				return 0;		
			}
		}
		cout<<"TAK";
		return 0;
	}
	f=0;
	char cen[15]={'A','H','I','M','O','o','T','U','V','v','W','w','X','x','Y'};
	for(j=0;j<15;j++)
	{
		if(a[n/2]==cen[j])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		cout<<"NIE";
		return 0;
	}
	f=0;
		for(i=0;i<(a.size()/2);i++)
		{
			x=0;
			for(j=0;j<19;j++)
			{
				if(l[j]==a[i])
				{
					x=1;
					if(a[n-i-1]!=r[j])
					{
						f=1;
						break;	
					}	
				}
				
			}
			if(x==0)
			{
				cout<<"NIE";
				return 0;		
			}
			if(f==1)
			{
				cout<<"NIE";
				return 0;		
			}
		}
		cout<<"TAK";
		return 0;
	return 0;
}