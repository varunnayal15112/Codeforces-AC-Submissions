/*
	SubmissionId	:	16268480
	ContestId	:	129
	Index	:	A
	ProblemName	:	Cookies
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int s=0,n,i,j,k=0;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	for(i=0;i<n;i++)
	{
		if((s-a[i])%2==0)
		k+=1;
	}
	cout<<k;
	return 0;
}