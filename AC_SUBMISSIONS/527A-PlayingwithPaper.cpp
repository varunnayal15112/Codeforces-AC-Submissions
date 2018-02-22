/*
	SubmissionId	:	16267010
	ContestId	:	527
	Index	:	A
	ProblemName	:	Playing with Paper
	ProblemTags	:	['implementation', 'math']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int k=0,a,b;
	cin>>a>>b;
	if(b==1)
	cout<<a;
	else
	{
		while(a!=b)
	{
		if(a>b)
		{
			k+=a/b;
			a-=(a/b)*b;
		}
		else if(a<b)
		{
			k+=b/a;
			b-=(b/a)*a;
		}
		if(a==b)
		k+=1;
		if(a==0||b==0)
		break;
	}
	cout<<k;
	}
	
	return 0;
}