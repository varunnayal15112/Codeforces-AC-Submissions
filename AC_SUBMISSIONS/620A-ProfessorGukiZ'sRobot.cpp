/*
	SubmissionId	:	15921301
	ContestId	:	620
	Index	:	A
	ProblemName	:	Professor GukiZ's Robot
	ProblemTags	:	['implementation', 'math']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x1,x2,y1,y2,kx,ky;
	cin>>x1>>y1;
	cin>>x2>>y2;
	kx=abs(x2-x1);
	ky=abs(y2-y1);
	if(kx>ky)
	cout<<kx;
	else
	cout<<ky;
	
	return 0;
}