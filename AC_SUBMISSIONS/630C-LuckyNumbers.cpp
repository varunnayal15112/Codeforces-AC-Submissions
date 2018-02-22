/*
	SubmissionId	:	16163324
	ContestId	:	630
	Index	:	C
	ProblemName	:	Lucky Numbers
	ProblemTags	:	['combinatorics', 'math']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,k=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		k+=pow(2,i);
	}
	cout<<k;
	return 0;
}