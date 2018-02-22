/*
	SubmissionId	:	19931622
	ContestId	:	384
	Index	:	C
	ProblemName	:	Milking cows
	ProblemTags	:	['greedy']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int one=0,f,cnt,len,p,q,r,t,i,j,k,l,n,m,x,y,z,b,c,s;
	cin>>n;
	m=0;
	long long int qw[n];
	for(i=0;i<n;i++)
	{
		cin>>k;
		if(k==0)
		m+=one;
		else
		one+=1;
	}
	cout<<m;
	

	return 0;
}
