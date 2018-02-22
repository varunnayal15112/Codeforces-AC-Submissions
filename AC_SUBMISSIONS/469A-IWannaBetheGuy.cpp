/*
	SubmissionId	:	18340180
	ContestId	:	469
	Index	:	A
	ProblemName	:	I Wanna Be the Guy
	ProblemTags	:	['greedy', 'implementation']
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
	long long int i,k,n,p,q,s=0;
	cin>>n;
	long long int x[n+1]={0};
	cin>>p;
	
	for(i=0;i<p;i++)
	{
		cin>>k;
		x[k]=1;
	}
	cin>>q;
	
	for(i=0;i<q;i++)
	{
		cin>>k;
		x[k]=1;
	}
	for(i=1;i<=n;i++)
	s+=x[i];
	if(s==n)
	cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";
	return 0;
}

