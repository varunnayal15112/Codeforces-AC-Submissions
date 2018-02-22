/*
	SubmissionId	:	17323136
	ContestId	:	141
	Index	:	A
	ProblemName	:	Amusing Joke
	ProblemTags	:	['implementation', 'sortings', 'strings']
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
	string a,b,p;
	cin>>a>>b>>p;
	long long int i,j,l1,l2,l3,k=0;
	l1=a.size();
	l2=b.size();
	l3=p.size();
	
	if((l1+l2)==l3)
	{
		for(i=0;i<l1;i++)
		{
			for(j=0;j<l3;j++)
			{
				if(p[j]!='.')
				{
					if(p[j]==a[i])
					{
						p[j]='.';
						k+=1;
						break;
					}
				}
			}
		}
		for(i=0;i<l2;i++)
		{
			for(j=0;j<l3;j++)
			{
				if(p[j]!='.')
				{
					if(p[j]==b[i])
					{
						p[j]='.';
						k+=1;
						break;
					}
				}
			}
		}
		if(k==l3)
		cout<<"YES";
		else
		cout<<"NO";
	}
	else
	cout<<"NO";
	
	
	return 0;
}
