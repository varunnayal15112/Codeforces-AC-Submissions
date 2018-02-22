/*
	SubmissionId	:	16644172
	ContestId	:	59
	Index	:	A
	ProblemName	:	Word
	ProblemTags	:	['implementation', 'strings']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int u=0,l=0,i,j,k,len;
	string a;
	cin>>a;
	len=a.size();
	for(i=0;i<len;i++)
	{
		if(a[i]>=65&&a[i]<=90)
		u+=1;
		else
		l+=1;
	}
	if(u>l)
	{
		for(i=0;i<len;i++)
		{
			if(a[i]>=97&&a[i]<=122)
			a[i]-=32;
		}	
	}
	else
	{
		for(i=0;i<len;i++)
		{
			if(a[i]>=65&&a[i]<=90)
			a[i]+=32;
		}	
	}
	cout<<a;
	return 0;
}