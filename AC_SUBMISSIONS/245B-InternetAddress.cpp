/*
	SubmissionId	:	19932080
	ContestId	:	245
	Index	:	B
	ProblemName	:	Internet Address
	ProblemTags	:	['implementation', 'strings']
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
	long long int d,sx,sy,ex,ey,f,cnt,len,p,q,r,t,i,j,k,l,n,m,x,y,z,b,c=0,s=0;
	string a;
	cin>>a;
	i=0;
	if(a[0]=='h')
	{
	 cout<<"http://";
	 i=4;	
	}
	else
	{
	 cout<<"ftp://";	
	 i=3;
	}
	f=0;
	for(j=i;j<a.size();j++)
	{
		if(a[j]=='r'&&a[j+1]=='u'&&f==1)
		{
			cout<<".ru";
			if((j+2)<a.size())
			{
				cout<<"/";
				for(k=j+2;k<a.size();k++)
				cout<<a[k];
				break;
			}
			else
			break;
	    
		}
		else
		{
			f=1;
			cout<<a[j];
		}
	}
		
	
	return 0;
}