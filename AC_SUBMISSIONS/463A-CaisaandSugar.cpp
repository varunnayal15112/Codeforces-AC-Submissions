/*
	SubmissionId	:	15882402
	ContestId	:	463
	Index	:	A
	ProblemName	:	Caisa and Sugar
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,s,x,y,i,j,k=0,m=0,f=0;
	cin>>n>>s;
	long long int a[n]={0};
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		if(x<s&&y!=0)
		{
			f=1;
			a[k]=100-y;
			if(a[k]>m)
			m=a[k];
			k+=1;
		}
		else if(x<=s&&y==0)
		{
			f=1;
			a[k]=0;
			k+=1;
		}	
	}
	if(f==0)
	cout<<"-1";
	else
	cout<<m;
	return 0;
}