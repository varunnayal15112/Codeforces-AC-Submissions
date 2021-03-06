/*
	SubmissionId	:	17299623
	ContestId	:	609
	Index	:	A
	ProblemName	:	USB Flash Drives
	ProblemTags	:	['greedy', 'implementation', 'sortings']
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
	long long int n,m,i,j,k=0,s=0;
	cin>>n>>m;
	long long int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	for(i=n-1;i>=0;i--)
	{
		if(s<m)
		{
			s+=a[i];
			k+=1;
		}
		else
		break;
	}
	cout<<k;
	return 0;
}
