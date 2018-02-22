/*
	SubmissionId	:	16288846
	ContestId	:	133
	Index	:	A
	ProblemName	:	HQ9+
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[10000];
	cin>>a;
	int k=0;
	if(strstr(a,"H")||strstr(a,"Q")||strstr(a,"9"))
	k=1;
	if(k==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}