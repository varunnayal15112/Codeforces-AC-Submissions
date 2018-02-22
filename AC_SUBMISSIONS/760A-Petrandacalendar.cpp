/*
	SubmissionId	:	24045816
	ContestId	:	760
	Index	:	A
	ProblemName	:	Petr and a calendar
	ProblemTags	:	['implementation', 'math']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int ans=1,rem,month,weekday;
	cin>>month>>weekday;
	if(month==2)
	{
		ans+=(28-(7-weekday+1))/7;
		if((28-(7-weekday+1))%7!=0)
		ans+=1;
	}
	else if(month<=7 && (month%2)!=0)
	{
		ans+=(31-(7-weekday+1))/7;
		if((31-(7-weekday+1))%7!=0)
		ans+=1;
	}
	else if(month<=7 && (month%2)==0)
	{
		ans+=(30-(7-weekday+1))/7;
		if((30-(7-weekday+1))%7!=0)
		ans+=1;
	}
	else if((month%2)!=0)
	{
		ans+=(30-(7-weekday+1))/7;
		if((30-(7-weekday+1))%7!=0)
		ans+=1;
	}
	else if((month%2)==0)
	{
		ans+=(31-(7-weekday+1))/7;
		if((31-(7-weekday+1))%7!=0)
		ans+=1;
	}	
	cout<<ans;
	return 0;
}