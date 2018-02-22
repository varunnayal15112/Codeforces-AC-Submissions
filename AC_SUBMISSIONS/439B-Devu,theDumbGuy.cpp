/*
	SubmissionId	:	18825099
	ContestId	:	439
	Index	:	B
	ProblemName	:	Devu, the Dumb Guy
	ProblemTags	:	['implementation', 'sortings']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,k,n,x;
	cin>>n>>x;
	long long int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	k=0;
	for(i=0;i<n;i++)
	{
		if(x>0)
		{
			k+=a[i]*x;
			x-=1;
		}
		else
		k+=a[i];
	}
	cout<<k;
	return 0;
}
