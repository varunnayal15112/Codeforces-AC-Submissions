/*
	SubmissionId	:	20246320
	ContestId	:	711
	Index	:	B
	ProblemName	:	Chris and Magic Square
	ProblemTags	:	['constructive algorithms']
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
	ll a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==0)
			{
				x=i;
				y=j;
			}
		}
	}
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	ll s1,s2;
	s2=0;
	for(j=0;j<n;j++)
	s2+=a[x][j];
	if(x==n-1)
	{
		s1=0;
		for(j=0;j<n;j++)
		{
			s1+=a[x-1][j];
		}
	}
	else
	{
		s1=0;
		for(j=0;j<n;j++)
		{
			s1+=a[x+1][j];
		}
		
	}
	if((s1-s2)<=0)
	{
		cout<<"-1";
		return 0;
	}

	a[x][y]=s1-s2;
	f=0;
	k=s1;
	for(i=0;i<n;i++)
	{
		s1=0;
		for(j=0;j<n;j++)
		{
		s1+=a[i][j];	
		}
		if(s1!=k)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		cout<<"-1";
		return 0;
	}
	for(i=0;i<n;i++)
	{
		s1=0;
		for(j=0;j<n;j++)
		{
		s1+=a[j][i];	
		}
		if(s1!=k)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		cout<<"-1";
		return 0;
	}
	s1=0;
	for(i=0;i<n;i++)
	{
		s1+=a[i][i];
	}
	if(s1!=k)
		{
			cout<<"-1";
			return 0;
		
		}
		s1=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i+j)==(n-1))
			s1+=a[i][j];
		}
	}
	if(s1!=k)
		{
			cout<<"-1";
			return 0;
		}
	
	cout<<a[x][y];
	return 0;
}

