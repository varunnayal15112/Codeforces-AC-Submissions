/*
	SubmissionId	:	17373402
	ContestId	:	264
	Index	:	A
	ProblemName	:	Escape from Stones
	ProblemTags	:	['constructive algorithms', 'data structures', 'implementation', 'two pointers']
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
	string a;
	cin>>a;
	long long int i,len;
	len=a.size();
	long long int s[len]={0},l=len-1,r=0;
	for(i=0;i<len;i++)
	{
		if(a[i]=='l')
		{
			s[l]=i+1;
			l-=1;
		}
		else
		{
			s[r]=i+1;
			r+=1;
		}
	}
	for(i=0;i<len;i++)
	cout<<s[i]<<"\n";
	return 0;
}

