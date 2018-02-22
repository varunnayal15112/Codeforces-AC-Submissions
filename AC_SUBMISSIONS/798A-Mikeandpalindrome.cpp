/*
	SubmissionId	:	33600405
	ContestId	:	798
	Index	:	A
	ProblemName	:	Mike and palindrome
	ProblemTags	:	['brute force', 'constructive algorithms', 'strings']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<iostream>
using namespace std;
int main()

{
	string s;
	cin>>s;
	int l=s.size();
	if(l==1)
	{
		cout<<"YES";
		return 0;
	}
	int cnt=0;
	for(int i=0;i<(l/2);i++)
	{
		if(s[i]!=s[l-i-1])
		cnt+=1;
	}
	if(cnt==0 && l%2!=0)
	cout<<"YES";
	else if(cnt==1)
	cout<<"YES";
	else
	cout<<"NO";
return 0;
}