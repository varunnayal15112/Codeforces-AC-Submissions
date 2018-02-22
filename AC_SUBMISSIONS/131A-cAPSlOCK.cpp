/*
	SubmissionId	:	15976092
	ContestId	:	131
	Index	:	A
	ProblemName	:	cAPS lOCK
	ProblemTags	:	['implementation', 'strings']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	long long int l,i,j,k=0,n;
	l=a.size();
	for(i=0;i<l;i++)
	{
		if(isupper(a[i]))
		k+=1;
	}
	if(k==l)
	{
		for(i=0;i<l;i++)
		cout<<(char)tolower(a[i]);		
	}
	else if(islower(a[0])&&k==(l-1))
	{
		cout<<(char)toupper(a[0]);
		for(i=1;i<l;i++)
		cout<<(char)tolower(a[i]);
	}
	else
	{
		for(i=0;i<l;i++)
		cout<<(a[i]);
	}
	return 0;
}

