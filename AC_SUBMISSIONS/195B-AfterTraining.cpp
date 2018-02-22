/*
	SubmissionId	:	19567022
	ContestId	:	195
	Index	:	B
	ProblemName	:	After Training
	ProblemTags	:	['data structures', 'implementation', 'math']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,i,j,k,n,m;
	cin>>n>>m;

	long long int a[m];
	if(m%2!=0)
	{
		k=(m+1)/2;
		a[0]=k;
		a[1]=k-1;
		a[2]=k+1;
		for(i=3;i<m;i++)
		{
			if(i%2!=0)
			a[i]=a[i-2]-1;
			else
			a[i]=a[i-2]+1;
		}
		k=0;
		for(i=0;i<n;i++)
		{
			if(k==m)
			k=0;
			cout<<a[k]<<"\n";
			k+=1;
		}
	}
	else
	{
		k=(m)/2;
		a[0]=k;
		a[1]=k+1;
		a[2]=k-1;
		for(i=3;i<(m-1);i++)
		{
			if(i%2!=0)
			a[i]=a[i-2]+1;
			else
			a[i]=a[i-2]-1;
		}
		a[m-1]=m;
		k=0;
		for(i=0;i<n;i++)
		{
			if(k==m)
			k=0;
			cout<<a[k]<<"\n";
			k+=1;
		}
		
	}
	
	
	return 0;
}