/*
	SubmissionId	:	15949083
	ContestId	:	622
	Index	:	B
	ProblemName	:	The Time
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int c,n,i,hh,mm,h,m;
	string a;
	cin>>a;
	cin>>n;
	hh=((a[0]-48)*10)+(a[1]-48);
	mm=((a[3]-48)*10)+(a[4]-48);
	m=n%60;
	h=n/60;
	mm+=m;
	if(mm>=60)
	{
		hh+=mm/60;
		mm=mm%60;
	}
	hh+=h;
	if(hh>=24)
	hh=hh%24;
	if(hh<10)
	cout<<"0"<<hh<<":";
	else
	cout<<hh<<":";
	if(mm<10)
	cout<<"0"<<mm;
	else
	cout<<mm;
	
	
	return 0;
}