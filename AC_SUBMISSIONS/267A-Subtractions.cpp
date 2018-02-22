/*
	SubmissionId	:	16643611
	ContestId	:	267
	Index	:	A
	ProblemName	:	Subtractions
	ProblemTags	:	['math', 'number theory']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,k,a,b,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		k=0;
		while((a!=0)&&(b!=0))
		{
			if(a>=b)
			{
				k+=a/b;
				a=a%b;
			}
			else
			{
				k+=b/a;
				b=b%a;
			}
		}
		cout<<k<<"\n";
	}
	
	return 0;
}