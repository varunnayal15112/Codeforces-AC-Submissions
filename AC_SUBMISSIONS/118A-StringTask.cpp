/*
	SubmissionId	:	16012493
	ContestId	:	118
	Index	:	A
	ProblemName	:	String Task
	ProblemTags	:	['implementation', 'strings']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,k;
	char a[100001],b[100001];
	gets(a);
	k=strlen(a);
	j=0;
	for(i=0;i<k;i++)
	{
		if(a[i]=='y'||a[i]=='Y'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
		}
		else
		{
			b[j]='.';
			if(a[i]>=65&&a[i]<=97)
			{
				b[j+1]=a[i]+32;
				
			}
			else
			b[j+1]=a[i];
			j+=2;	
		}
	}
	for(i=0;i<j;i++)
	cout<<b[i];
	return 0;
}