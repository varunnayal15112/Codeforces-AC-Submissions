/*
	SubmissionId	:	18340488
	ContestId	:	330
	Index	:	A
	ProblemName	:	Cakeminator
	ProblemTags	:	['brute force', 'implementation']
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
	long long int k,f,i,j,r,c,cnt=0,s=0,d=0;
	cin>>r>>c;
	char a[r][c];
	for(i=0;i<r;i++)
	cin>>a[i];
	for(i=0;i<r;i++)
	{
		f=0;
		d=0;
		for(j=0;j<c;j++)
		{
			if(a[i][j]=='S')
			{
				f=1;
				break;
			}
			if(a[i][j]=='$')
			d+=1;
		}
		if(f==0)
		{
			cnt+=c-d;
			for(k=0;k<c;k++)
			a[i][k]='$';
		}
	}
	for(i=0;i<c;i++)
	{
		f=0;
		d=0;
		for(j=0;j<r;j++)
		{
			if(a[j][i]=='S')
			{
				f=1;
				break;
			}
			if(a[j][i]=='$')
			d+=1;
		}
		if(f==0)
		{
			cnt+=r-d;
			for(k=0;k<r;k++)
			a[k][i]='$';
		}
	}
	cout<<cnt;
	
	return 0;
}

