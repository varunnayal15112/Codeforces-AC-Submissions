/*
	SubmissionId	:	16158638
	ContestId	:	630
	Index	:	A
	ProblemName	:	Again Twenty Five!
	ProblemTags	:	['number theory']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	if(n==0)
	cout<<"01";
	else if(n==1)
	cout<<"05";
	else cout<<"25";
	return 0;
}