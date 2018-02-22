/*
	SubmissionId	:	33600558
	ContestId	:	384
	Index	:	A
	ProblemName	:	Coder
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long int f,cnt,len,p,q,r,t,i,j,k,l,n,m,x,y,z,b,c,s;
	cin>>n;
	c=n;
	for(i=2;i<n;i+=2)
	c+=2*(n-i);
	cout<<c<<"\n";
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<n;j++)
			{
				if(j%2==0)
				cout<<"C";
				else
				cout<<".";			
			}	
		}
		else
		{
			for(j=0;j<n;j++)
			{
				if(j%2!=0)
				cout<<"C";
				else
				cout<<".";			
			}
		}
		cout<<"\n";
		
	}
	




	return 0;
}