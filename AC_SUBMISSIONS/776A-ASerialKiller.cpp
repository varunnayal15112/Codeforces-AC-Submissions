/*
	SubmissionId	:	25018174
	ContestId	:	776
	Index	:	A
	ProblemName	:	A Serial Killer
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286
#define mod 1000000007

using namespace std;


ll a[100005];

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int f,cnt,len,p,q,r,t,i,j,k,l,n,m,x,y,z,b,c,s;
	string vic1,vic2,s1,s2;
	cin>>vic1>>vic2;
	cin>>n;
	cout<<vic1<<" "<<vic2<<"\n";
	for(i=0;i<n;i++)
	{
		cin>>s1>>s2;
		if(s1==vic1){
			vic1=vic2;
			vic2=s2;
		}
		else
		{
			vic2=vic1;
			vic1=s2;
		}
		cout<<vic1<<" "<<vic2<<"\n";
	}
	return 0;
}

/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/