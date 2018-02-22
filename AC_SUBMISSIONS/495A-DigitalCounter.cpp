/*
	SubmissionId	:	16266443
	ContestId	:	495
	Index	:	A
	ProblemName	:	Digital Counter
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	long long int x,y,i,j;
	x=a[0]-48;
	y=a[1]-48;
	switch(x)
	{
		case 0:
			{
				i=2;
				break;
			}
			case 1:
			{
				i=7;
				break;
			}
			case 2:
			{
				i=2;
				break;
			}
			case 3:
			{
				i=3;
				break;
			}
			case 4:
			{
				i=3;
				break;
			}
			case 5:
			{
				i=4;
				break;
			}
			case 6:
			{
				i=2;
				break;
			}
			case 7:
			{
				i=5;
				break;
			}
			case 8:
			{
				i=1;
				break;
			}
			case 9:
			{
				i=2;
				break;
			}
	}
	switch(y)
	{
		case 0:
			{
				j=2;
				break;
			}
			case 1:
			{
				j=7;
				break;
			}
			case 2:
			{
				j=2;
				break;
			}
			case 3:
			{
				j=3;
				break;
			}
			case 4:
			{
				j=3;
				break;
			}
			case 5:
			{
				j=4;
				break;
			}
			case 6:
			{
				j=2;
				break;
			}
			case 7:
			{
				j=5;
				break;
			}
			case 8:
			{
				j=1;
				break;
			}
			case 9:
			{
				j=2;
				break;
			}
	}
	cout<<i*j;
	return 0;
}