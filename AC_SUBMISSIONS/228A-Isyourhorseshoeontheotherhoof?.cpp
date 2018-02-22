/*
	SubmissionId	:	16348049
	ContestId	:	228
	Index	:	A
	ProblemName	:	Is your horseshoe on the other hoof?
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int b[4]={0},a[4],i,j,k=0,m;
	for(i=0;i<4;i++)
	{
		cin>>a[i];
	}
	k=0;
	for(i=0;i<4;i++)
	{
		if(a[i]>0)
		{
			for(j=i+1;j<4;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=-1;
				b[k]+=1;
				
			}
			
		}
		k+=1;
		}
		
	}
	m=0;
	for(i=0;i<k;i++)
	{
		if(b[i]>0)
		m+=b[i];
	}
	cout<<m;
	return 0;
}