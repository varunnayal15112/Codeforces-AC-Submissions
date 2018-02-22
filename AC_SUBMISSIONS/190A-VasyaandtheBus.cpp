/*
	SubmissionId	:	33600574
	ContestId	:	190
	Index	:	A
	ProblemName	:	Vasya and the Bus
	ProblemTags	:	['greedy', 'math']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,k,max=0,min=0;
	cin>>n>>m;
	if(n==0&&m>0)
	cout<<"Impossible";
	else if(n==0&&m==0)
	cout<<"0 0";
	else
	{
		if(m==0)
		{
			min=n;
			max=n;
		}
		else if(n>=m)
		{
			int a[n]={0};
			max=n+m-1;
			k=m;i=0;
			while(k>0)
			{
				a[i]+=1;
				i+=1;
				k-=1;
			}
			for(i=0;i<n;i++)
			min+=a[i];
			min+=n-m;
		}
		else if(m>n)
		{
			int a[n]={0};
			max=n+m-1;
			i=0;
			while(m>0&&i<n)
			{
			a[i]+=1;
			m-=1;
			i+=1;
			if(i==n)
			i=0;
			}	
			for(i=0;i<n;i++)
			min+=a[i];
		}
		cout<<min<<" "<<max;
	}
	
	return 0;
}