/*
	SubmissionId	:	15919181
	ContestId	:	610
	Index	:	A
	ProblemName	:	Pasha and Stick
	ProblemTags	:	['combinatorics', 'math']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y,n,w,i,j,k;
	scanf("%I64d",&n);
	if(n<5||n%2!=0)
	{
		printf("0");
		return 0;
	}
	else
	{
		n=n/2;
		x=1;
		y=n-1;
		w=0;
		while(x<y)
		{
			w+=1;
			x+=1;
			y-=1;
		}
		printf("%I64d",w);
	}
	return 0;
}