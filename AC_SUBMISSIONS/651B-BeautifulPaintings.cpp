/*
	SubmissionId	:	16579177
	ContestId	:	651
	Index	:	B
	ProblemName	:	Beautiful Paintings
	ProblemTags	:	['greedy', 'sortings']
	ProgrammingLanguage	:	GNU C++11
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
	sort(a,a+n);

	long long int l=1;
	for(i=0;i<(n-1);i++)
	{
		for(j=l;j<n;j++)
			{
				if(a[j]>a[i])
				{
					k+=1;
					l=j+1;
					break;
				}
			}	
	}
	cout<<k;
	return 0;
}