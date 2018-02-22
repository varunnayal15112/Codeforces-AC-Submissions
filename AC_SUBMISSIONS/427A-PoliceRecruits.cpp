/*
	SubmissionId	:	16288572
	ContestId	:	427
	Index	:	A
	ProblemName	:	Police Recruits
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,k=0,c=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>j;
		if(j==-1)
		{
			if(k>0)
			k-=1;
			else c+=1;
		}
		else k+=j;
	}
	cout<<c;
	return 0;
}