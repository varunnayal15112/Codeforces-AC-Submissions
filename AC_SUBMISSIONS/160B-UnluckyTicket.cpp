/*
	SubmissionId	:	19951887
	ContestId	:	160
	Index	:	B
	ProblemName	:	Unlucky Ticket
	ProblemTags	:	['greedy', 'sortings']
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
	string a;
	cin>>a;
	ll a1[n],a2[n];
	for(i=0;i<n;i++)
	{
		a1[i]=a[i]-48;
	}
	for(i=0;i<n;i++)
	{
		a2[i]=a[n+i]-48;
	}
	sort(a1,a1+n);
	sort(a2,a2+n);
/*	for(i=0;i<n;i++)
	cout<<a1[i]<<" ";
	cout<<"\n";
	for(i=0;i<n;i++)
	cout<<a2[i]<<" ";
	*/
	if(a1[0]<a2[0])
	{
		for(i=1;i<n;i++)
		{
			if(a1[i]>=a2[i])
			{
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
		return 0;
	}
	else if(a1[0]>a2[0])
	{
		for(i=1;i<n;i++)
		{
			if(a1[i]<=a2[i])
			{
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
		return 0;
	}
	else
	cout<<"NO";
	return 0;
}
