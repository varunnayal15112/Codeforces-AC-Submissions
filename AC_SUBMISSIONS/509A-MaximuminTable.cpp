/*
	SubmissionId	:	17382637
	ContestId	:	509
	Index	:	A
	ProblemName	:	Maximum in Table
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
	long long int n;
	cin>>n;
	long long int a[n][n],i,j,k;
	for(i=0;i<n;i++)
	{
		a[i][0]=1;
		a[0][i]=1;
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	cout<<a[n-1][n-1];
	return 0;
}

