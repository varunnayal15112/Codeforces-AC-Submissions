/*
	SubmissionId	:	20386880
	ContestId	:	709
	Index	:	C
	ProblemName	:	Letters Cyclic Shift
	ProblemTags	:	['greedy']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	long long int i,j,k,n,m,f=0;
	long long int len=a.size();
	for(i=0;i<len;i++)
	{
		if(f==0&&a[i]!='a')
		{
			f=1;
			a[i]-=1;
		}
		else if(f==1&&a[i]=='a')
		break;
		else if(f==1&&a[i]!='a')
		a[i]-=1;
	}
	if(f==0)
	{
		a[len-1]='z';
	}
	cout<<a;

	return 0;
}