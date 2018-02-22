/*
	SubmissionId	:	20386839
	ContestId	:	145
	Index	:	A
	ProblemName	:	Lucky Conversion
	ProblemTags	:	['greedy', 'implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    ll i,len=a.size();
    ll f4_7=0,s7_4=0;
    for(i=0;i<len;i++)
    {
    	if(a[i]=='4'&&b[i]=='7')
    		f4_7+=1;
    	else if(a[i]=='7'&&b[i]=='4')
    		s7_4+=1;
    }
    ll cnt=0;
    if(f4_7>=s7_4)
    {
    	cnt=s7_4+(f4_7-s7_4);
    }
    else
    {
    	cnt=f4_7+(s7_4-f4_7);	
    }
    cout<<cnt;

	return 0;
}