/*
	SubmissionId	:	16293611
	ContestId	:	478
	Index	:	A
	ProblemName	:	Initial Bet
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,sum=0;
	for(i=0;i<5;i++)
	{
		cin>>n;
		sum+=n;
	}
	if(sum==0)
	cout<<"-1";
	else if((sum%5)==0)
	cout<<sum/5;
	else
	cout<<"-1";
	return 0;
}