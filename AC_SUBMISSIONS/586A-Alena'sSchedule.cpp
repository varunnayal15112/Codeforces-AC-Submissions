/*
	SubmissionId	:	18829041
	ContestId	:	586
	Index	:	A
	ProblemName	:	Alena's Schedule
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int pai=0,f,zero=0,one=0,n,i,j,k;
	cin>>n;
	f=0;
	for(i=0;i<n;i++)
	{
		cin>>k;
		if(k==1)
		{
			f=1;
			pai+=1;
			if(zero<2)
			pai+=zero;
			zero=0;
		
		}
		else if(f==1)
		{
			zero+=1;
		}
	}
	cout<<pai;
	
	return 0;
}