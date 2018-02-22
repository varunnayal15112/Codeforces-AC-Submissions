/*
	SubmissionId	:	17023209
	ContestId	:	658
	Index	:	A
	ProblemName	:	Bear and Reverse Radewoosh
	ProblemTags	:	['implementation']
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
	long long int w,z,i,n,c,k=0;
	cin>>n>>c;
	long long int p[n],t[n];
	for(i=0;i<n;i++)
	cin>>p[i];
	for(i=0;i<n;i++)
	cin>>t[i];
	long long int x,y,l,r;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			w=p[i]-c*t[i];
			z=p[n-1-i]-c*t[n-1-i];
			l=max(k,w);
			r=max(k,z);
			x=t[i];
			y=t[n-1-i];
		}
		else
		{
			x+=t[i];
			y+=t[n-1-i];
			w=p[i]-c*x;
			z=p[n-1-i]-c*y;
			l+=max(k,w);
			r+=max(k,z);
			
		}
	}
	if(l>r)
	cout<<"Limak";
	else if(l<r)
	cout<<"Radewoosh";
	else
	cout<<"Tie";
	return 0;
}