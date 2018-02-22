/*
	SubmissionId	:	16364598
	ContestId	:	633
	Index	:	A
	ProblemName	:	Ebony and Ivory
	ProblemTags	:	['brute force', 'math']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int f=0,a,b,c;
	cin>>a>>b>>c;
	long long int i,j,k;
	for(i=0;(c-(i*a))>=0;i++)
	{
		for(j=0;(c-(j*b))>=0;j++)
		{
			if(((a*i)+(j*b))==c)
			{
				f=1;
				cout<<"Yes";
				break;
			}
			else if(((a*i)+(j*b))>c)
			{
				break;
			}
			
		}
		if(f==1)
		break;
	}
	if(f==0)
	cout<<"No";
	return 0;
}