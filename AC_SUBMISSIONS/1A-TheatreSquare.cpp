/*
	SubmissionId	:	15988566
	ContestId	:	1
	Index	:	A
	ProblemName	:	Theatre Square
	ProblemTags	:	['math']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,a,x=0,y=0;
	cin>>n>>m>>a;
	if(n%a!=0)
	x=1;
	if(m%a!=0)
	y=1;
	cout<<((n/a)+x)*((m/a)+y);
	return 0;
}