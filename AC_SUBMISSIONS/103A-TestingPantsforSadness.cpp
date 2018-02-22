/*
	SubmissionId	:	15976483
	ContestId	:	103
	Index	:	A
	ProblemName	:	Testing Pants for Sadness
	ProblemTags	:	['greedy', 'implementation', 'math']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,k=0;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			k+=a[i];
		}
		else
		k+=a[i]+((a[i]-1)*i);	
	}	
	cout<<k;
	return 0;
}