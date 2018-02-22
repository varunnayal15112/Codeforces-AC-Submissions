/*
	SubmissionId	:	18333953
	ContestId	:	680
	Index	:	B
	ProblemName	:	Bear and Finding Criminals
	ProblemTags	:	['constructive algorithms', 'implementation']
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
	long long int cnt,k,n,a,c=0;
	cin>>n>>a;
	k=a-1;
	long long int i,t[n];
	for(i=0;i<n;i++)
	cin>>t[i];
	if(t[k]==1)
	c+=1;
	if(a<=(n/2))
	cnt=n-a;
	else
	cnt=a;
	for(i=1;i<=cnt;i++)
	{
		if((k-i)>=0&&(k+i)<n)
		{
			if(t[k-i]+t[k+i]==2)
			c+=2;
		}
		else if((k-i)>=0&&t[k-i]==1)
			{
				c+=1;
			}
			else if((k+i)<n&&t[k+i]==1)
				{
					c+=1;
				}
	}
	cout<<c;
	
	return 0;
}

