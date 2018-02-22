/*
	SubmissionId	:	16644056
	ContestId	:	432
	Index	:	A
	ProblemName	:	Choosing Teams
	ProblemTags	:	['greedy', 'implementation', 'sortings']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,i,m,j;
	cin>>n>>k;
	long long int a[n];
	j=0;
	for(i=0;i<n;i++)
	{
		cin>>m;
		if((m+k)<=5)
		{
			a[j]=m;
			j+=1;	
		}	
	}
	n=j;
	cout<<n/3;
	return 0;
}