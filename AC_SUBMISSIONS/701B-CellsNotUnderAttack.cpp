/*
	SubmissionId	:	19567027
	ContestId	:	701
	Index	:	B
	ProblemName	:	Cells Not Under Attack
	ProblemTags	:	['math']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int x,y,f1,f2,i,j,k,n,m,a,b;
	cin>>n>>m;
	long long int r[n+1]={0},c[n+1]={0};
	a=b=n;
	for(k=0;k<m;k++)
	{
		cin>>x>>y;
		if(r[x]==0)
		{
			a=a-1;
			r[x]=1;	
		}
	if(c[y]==0)
		{
			b=b-1;
			c[y]=1;	
		}	
		cout<<a*b<<" ";
	}
	return 0;
}