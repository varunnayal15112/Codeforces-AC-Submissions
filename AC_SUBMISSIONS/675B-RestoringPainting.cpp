/*
	SubmissionId	:	17946685
	ContestId	:	675
	Index	:	B
	ProblemName	:	Restoring Painting
	ProblemTags	:	['brute force', 'constructive algorithms', 'math']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a,b,c,d,i,j,k,x,y,z,w,v,t=0;
	cin>>n>>a>>b>>c>>d;
	for(x=1;x<=n;x++)
	{
		w=a+x-d;
		y=b+x-c;
		v=a+b+x-c-d;
		if((w>=1&&w<=n)&&(y>=1&&y<=n)&&(v>=1&&v<=n))
		t+=1;
	}
	cout<<n*t;
	return 0;
}

