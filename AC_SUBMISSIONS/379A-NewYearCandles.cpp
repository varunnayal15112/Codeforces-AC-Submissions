/*
	SubmissionId	:	16347780
	ContestId	:	379
	Index	:	A
	ProblemName	:	New Year Candles
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,h=0;
	cin>>a>>b;
	h=a;
	while(a>=b)
	{
		h+=a/b;
		a=(a%b)+(a/b);
	}
	cout<<h;
	return 0;
}