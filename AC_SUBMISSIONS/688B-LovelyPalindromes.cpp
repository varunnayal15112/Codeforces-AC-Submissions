/*
	SubmissionId	:	18794910
	ContestId	:	688
	Index	:	B
	ProblemName	:	Lovely Palindromes
	ProblemTags	:	['constructive algorithms', 'math']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	cout<<a;
	long long int i,j,k,l;
	l=a.size();
	for(i=l-1;i>=0;i--)
	cout<<a[i];
	return 0;
}