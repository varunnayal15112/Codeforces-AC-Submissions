/*
	SubmissionId	:	17299070
	ContestId	:	489
	Index	:	B
	ProblemName	:	BerSU Ball
	ProblemTags	:	['dfs and similar', 'dp', 'graph matchings', 'greedy', 'sortings', 'two pointers']
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
	//ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int x=0,n,m,i,j,k=0;
	cin>>n;
	long long int b[n];
	for(i=0;i<n;i++)
	cin>>b[i];
	cin>>m;
	long long int g[m];
	for(i=0;i<m;i++)
	cin>>g[i];
	i=0;
	sort(b,b+n);
	sort(g,g+m);
	long long int f=0;
	i=0;k=0;x=0;
		while(i<n)
		{
			for(j=x;j<m;j++)
			{	
			if(g[j]>=0)
			{
				if(abs(b[i]-g[j])<=1)
				{
					g[j]=-1;
					k+=1;
					x+=1;
					break;
				}
			}
					
			}
			i+=1;
		}
	
	cout<<k;
	return 0;
}
