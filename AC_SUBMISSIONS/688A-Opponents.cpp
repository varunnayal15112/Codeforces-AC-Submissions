/*
	SubmissionId	:	18793667
	ContestId	:	688
	Index	:	A
	ProblemName	:	Opponents
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int ans,f=0,cnt,i,j,k,n,d;
	cin>>n>>d;
	char a[d][n];
	k=0;
	for(i=0;i<d;i++)
	{
		cin>>a[i];
	}
	ans=0;
	for(i=0;i<d;i++)
	{
		cnt=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='1')
			{
				cnt+=1;
			}
			else
			{
				k+=1;
				break;	
			}
		}
		if(cnt==n||i==d-1)
		{
			if(k>ans)
			ans=k;
			k=0;
		}
	}
	if(k==d)
	cout<<k;
	else
	cout<<ans;
	
	
	return 0;
}