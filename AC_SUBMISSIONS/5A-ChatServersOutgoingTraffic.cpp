/*
	SubmissionId	:	15977066
	ContestId	:	5
	Index	:	A
	ProblemName	:	Chat Servers Outgoing Traffic
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int len,i,j,k=0,sum=0;
	string a;
	for(i=0;i<100;i++)
	{
		getline(cin,a);
		if(a[0]=='+')
		k+=1;
		else if(a[0]=='-')
		k-=1;
		else if(a.size()!=0)
		{
			len=a.size();
			for(j=0;j<len;j++)
			{
				if(a[j]==':')
				break;
			}
			sum+=k*(len-j-1);
		}
		else
		break;
	}
	cout<<sum;
	
	return 0;
}