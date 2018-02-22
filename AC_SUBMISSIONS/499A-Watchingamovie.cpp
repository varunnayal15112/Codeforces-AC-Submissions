/*
	SubmissionId	:	33600562
	ContestId	:	499
	Index	:	A
	ProblemName	:	Watching a movie
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int ini=1,i,l,r,n,x,t=0;
	cin>>n>>x;
	for(i=0;i<n;i++)
	{
		cin>>l>>r;
		while((ini+x)<=l)
		ini+=x;
		t+=r-ini+1;
		ini=r+1;		
	}
	cout<<t;
	return 0;
}