/*
	SubmissionId	:	17373867
	ContestId	:	435
	Index	:	A
	ProblemName	:	Queue on Bus Stop
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
	long long int n,m;
	cin>>n>>m;
	long long int a[n],i,j,k,b=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	for(i=0;i<n;i++)
	{
		if(i==(n-1))
		{
			b+=1;
			break;
		}
		if(a[i]==m)
		b+=1;
		else
		{
			long long int s=0;
			for(j=i;j<n;j++)
			{
				s+=a[j];
				if(s>m)
				{
					b+=1;
					i=j-1;
					break;
				}
				else if(s==m)
				{
					b+=1;
					i=j;
					break;
				}
			}
		}
	}
	cout<<b;
	return 0;
}

