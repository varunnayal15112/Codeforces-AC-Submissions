/*
	SubmissionId	:	16268572
	ContestId	:	467
	Index	:	A
	ProblemName	:	George and Accommodation
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,p,q,i,j,k=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>p>>q;
		if((q-p)>=2)
		k+=1;
	}
	cout<<k;
	return 0;
}