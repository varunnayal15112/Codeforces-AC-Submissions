/*
	SubmissionId	:	16379055
	ContestId	:	214
	Index	:	A
	ProblemName	:	System of Equations
	ProblemTags	:	['brute force']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,a,b,k=0;
	cin>>n>>m; 
	for(a=0;a<=m;a++)
	{
		for(b=0;b<=n;b++)
		{
			if((a*a)+b==n&&(b*b)+a==m)
			k+=1;
			else if(((a*a)+b)>n)
			break;
			else if(((b*b)+a)>m)
			break;
		}
	}
	cout<<k;
	
	return 0;
}