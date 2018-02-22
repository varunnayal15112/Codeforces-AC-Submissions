/*
	SubmissionId	:	16294251
	ContestId	:	577
	Index	:	A
	ProblemName	:	Multiplication Table
	ProblemTags	:	['implementation', 'number theory']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x,k=0,i;
	cin>>n>>x;
	if(x>n)
	k=0;
	else
	k=1;
	for(i=2;i<=n;i++)
	if(x%i==0&&(x/i)<=n)
	k+=1;
	cout<<k;
	return 0;
}