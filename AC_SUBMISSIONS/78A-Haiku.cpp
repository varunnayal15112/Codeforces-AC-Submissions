/*
	SubmissionId	:	19950751
	ContestId	:	78
	Index	:	A
	ProblemName	:	Haiku
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
	long long int f,cnt,len,p,q,r,t,j,k,l,n,m,x,y,z,b,c,s;
 	char ch[101];
 	ll p1,p2,p3;
 	cin.getline(ch,101);
 	ll a=0,e=0,i=0,o=0,u=0;
 	for(j=0;ch[j]!='\0';j++)
 	{
 		if(ch[j]=='a')
 		a+=1;
 		if(ch[j]=='e')
 		e+=1;
 		if(ch[j]=='i')
 		i+=1;
 		if(ch[j]=='o')
 		o+=1;
 		if(ch[j]=='u')
 		u+=1;
 		
	}
	p1=a+e+i+o+u;
	cin.getline(ch,101);
 	a=0,e=0,i=0,o=0,u=0;
 	for(j=0;ch[j]!='\0';j++)
 	{
 		if(ch[j]=='a')
 		a+=1;
 		if(ch[j]=='e')
 		e+=1;
 		if(ch[j]=='i')
 		i+=1;
 		if(ch[j]=='o')
 		o+=1;
 		if(ch[j]=='u')
 		u+=1;
 		
	}
	p2=a+e+i+o+u;
	cin.getline(ch,101);
 	a=0,e=0,i=0,o=0,u=0;
 	for(j=0;ch[j]!='\0';j++)
 	{
 		if(ch[j]=='a')
 		a+=1;
 		if(ch[j]=='e')
 		e+=1;
 		if(ch[j]=='i')
 		i+=1;
 		if(ch[j]=='o')
 		o+=1;
 		if(ch[j]=='u')
 		u+=1;
 		
	}
	p3=a+e+i+o+u;
	if(p1==5&&p2==7&&p3==5)
	cout<<"YES";
	else
	cout<<"NO";

	return 0;
}

