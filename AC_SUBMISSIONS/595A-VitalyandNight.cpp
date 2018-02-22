/*
	SubmissionId	:	15830559
	ContestId	:	595
	Index	:	A
	ProblemName	:	Vitaly and Night
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long int i,j,k=0,n,m;
	cin>>n>>m;
	long long int a[n][2*m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<(2*m);j++)
		cin>>a[i][j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<(2*m);j+=2)
		if((a[i][j]==1)||(a[i][j+1]==1))
		k+=1;
	}
	cout<<k;
	return 0;
}