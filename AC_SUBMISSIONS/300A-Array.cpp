/*
	SubmissionId	:	17336553
	ContestId	:	300
	Index	:	A
	ProblemName	:	Array
	ProblemTags	:	['brute force', 'constructive algorithms', 'implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286
using namespace std;
bool isprime(ull n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ull i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int a,x,i,j,k;
	cin>>x;
	long long int m[101],p[101],z[101],ne=0,po=0,ze=0;
	for(i=0;i<x;i++)
	{
		cin>>a;
		if(a<0)
		{
			m[ne]=a;
			ne+=1;
		}
		else if(a==0)
		{
			z[ze]=a;
			ze+=1;
		}
		else if(a>0)
		{
			p[po]=a;
			po+=1;
		}
	}
	if(po==0)
	{
		p[0]=m[ne-1];
		p[1]=m[ne-2];
		ne-=2;
		po+=2;
	}
	if(ne%2==0)
	{
		z[ze]=m[ne-1];
		ze+=1;
		ne-=1;
	}
	
	cout<<ne<<" ";
	for(i=0;i<ne;i++)
	cout<<m[i]<<" ";
	cout<<"\n";
	
	cout<<po<<" ";
	for(i=0;i<po;i++)
	cout<<p[i]<<" ";
	cout<<"\n";
	
	cout<<ze<<" ";
	for(i=0;i<ze;i++)
	cout<<z[i]<<" ";
	cout<<"\n";
	
	
	return 0;
}

