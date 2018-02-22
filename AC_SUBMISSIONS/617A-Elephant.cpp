/*
	SubmissionId	:	16348202
	ContestId	:	617
	Index	:	A
	ProblemName	:	Elephant
	ProblemTags	:	['math']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x;
	cin>>x;
	if(x<=5)
	cout<<"1";
	else
	{
		if(x%5==0)
		cout<<x/5;
		else
		cout<<(x/5)+1;
	}
	return 0;
}