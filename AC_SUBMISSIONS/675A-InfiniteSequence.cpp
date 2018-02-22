/*
	SubmissionId	:	17941094
	ContestId	:	675
	Index	:	A
	ProblemName	:	Infinite Sequence
	ProblemTags	:	['math']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,b,c;
	cin>>x>>b>>c;
	if(x==b)
	{
		cout<<"YES";
		return 0;
	}
	if(c==0)
	{
		cout<<"NO";
		return 0;
	}
	if(((b-x)%c==0)&&(((b-x)/c)+1)>0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}

