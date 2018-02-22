/*
	SubmissionId	:	19567034
	ContestId	:	701
	Index	:	A
	ProblemName	:	Cards
	ProblemTags	:	['greedy']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int x,y,b[n],a[n],i,j,k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	for(i=0;i<(n/2);i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]==b[i])
			{
				a[j]=-1;
				x=j+1;
				break;
			}
		}
		for(j=0;j<n;j++)
		{
			if(a[j]==b[n-i-1])
			{
				a[j]=-1;
				y=j+1;
				break;
			}
		}
		if(x<=y)
		cout<<x<<" "<<y<<"\n";
		else
		cout<<y<<" "<<x<<"\n";
	}
	return 0;
}