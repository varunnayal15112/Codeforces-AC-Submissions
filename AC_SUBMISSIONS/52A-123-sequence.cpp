/*
	SubmissionId	:	16742783
	ContestId	:	52
	Index	:	A
	ProblemName	:	123-sequence
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int a[3]={0},n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>k;
		a[k-1]+=1;
	}
	if((a[2]>=a[1])&&(a[2]>=a[0]))
	cout<<a[0]+a[1];
	else if((a[1]>=a[2])&&(a[1]>=a[0]))
	cout<<a[2]+a[0];
	else 
	cout<<a[2]+a[1];
	return 0;
}