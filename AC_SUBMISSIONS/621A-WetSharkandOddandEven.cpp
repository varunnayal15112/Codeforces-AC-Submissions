/*
	SubmissionId	:	15921145
	ContestId	:	621
	Index	:	A
	ProblemName	:	Wet Shark and Odd and Even
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,k,sum=0;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%2==0)
	cout<<sum;
	else
	{
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(a[i]%2==1)
			{	
			sum-=a[i];
			break;
			}
		}
		cout<<sum;
	}
	return 0;
}