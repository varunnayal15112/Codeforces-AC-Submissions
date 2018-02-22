/*
	SubmissionId	:	16204112
	ContestId	:	628
	Index	:	A
	ProblemName	:	Tennis Tournament
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,b,p;
	cin>>n>>b>>p;
	cout<<(n-1)*((2*b)+1)<<" "<<n*p;
	return 0;
}