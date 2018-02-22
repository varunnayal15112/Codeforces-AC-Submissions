/*
	SubmissionId	:	15885242
	ContestId	:	363
	Index	:	A
	ProblemName	:	Soroban
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,k;
	cin>>n;
	if(n==0)
	cout<<"O-|-OOOO";
	else
	{
		while(n>0)
	{
		char a[8];
		k=n%10;
		if(k<5)
		{
			a[0]='O';
			a[1]='-';
			a[2]='|';
		}
		else
		{
			a[0]='-';
			a[1]='O';
			a[2]='|';
			k=k-5;
		}
		for(i=3;i<(k+3);i++)
			a[i]='O';
			a[i]='-';
			for(j=i+1;j<8;j++)
			a[j]='O';
		for(i=0;i<8;i++)
		cout<<a[i];
		cout<<"\n";
		n=n/10;
	}
	}
	
	return 0;
}