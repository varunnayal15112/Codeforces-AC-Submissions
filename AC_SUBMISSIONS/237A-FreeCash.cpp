/*
	SubmissionId	:	17364030
	ContestId	:	237
	Index	:	A
	ProblemName	:	Free Cash
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
	long long int n,i,j,k,c;
	cin>>n;
	long long int a[n][2];
	for(i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	long long int r[n]={0};
	i=0;
	while(i<n)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i][0]!=a[j][0]||a[i][1]!=a[j][1])
			{
				break;
			}
			else
			{
				r[i]+=1;
			}
			
		}
		i=j;
	}
	sort(r,r+n);
	cout<<r[n-1]+1;
	return 0;
}

