/*
	SubmissionId	:	16565805
	ContestId	:	651
	Index	:	A
	ProblemName	:	Joysticks
	ProblemTags	:	['dp', 'greedy']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,k=0;
	cin>>a>>b;
	if(a==1&&b==1)
	cout<<"0";
	else
	{
		while((a>0)&&(b>0))
	{
		if(a<=b)
		{
			a+=1;
			b-=2;
		}
		else
		{
			b+=1;
			a-=2;	
		}
		k+=1;
	}
	cout<<k;

	}
		return 0;
}