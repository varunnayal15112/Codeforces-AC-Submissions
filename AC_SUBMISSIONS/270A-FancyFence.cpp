/*
	SubmissionId	:	17326934
	ContestId	:	270
	Index	:	A
	ProblemName	:	Fancy Fence
	ProblemTags	:	['geometry', 'implementation', 'math']
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
 	//    your code goes here
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int t,a,i,j,k;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a;
		if((360%(180-a))==0)
		cout<<"YES";
		else
		cout<<"NO";
		cout<<"\n";
	}
	return 0;
} //       end of main()
