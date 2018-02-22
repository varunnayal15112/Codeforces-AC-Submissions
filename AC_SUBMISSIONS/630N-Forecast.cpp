/*
	SubmissionId	:	16177690
	ContestId	:	630
	Index	:	N
	ProblemName	:	Forecast
	ProblemTags	:	['math']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,c,k=0,m=0;
	cin>>a>>b>>c;
	double i,j;
	i=(-b+pow((b*b)-(4*a*c),0.5))/(2*a);
	j=(-b-pow((b*b)-(4*a*c),0.5))/(2*a);
	if(i>j)
	{
		printf("%.15f\n",i);
		printf("%.15f\n",j);
	}
	else
	{
		printf("%.15f\n",j);
		printf("%.15f\n",i);
	}
	return 0;
}