/*
	SubmissionId	:	17568052
	ContestId	:	268
	Index	:	B
	ProblemName	:	Buttons
	ProblemTags	:	['implementation', 'math']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,c,p;
    cin>>n;
    c=1;
    p=0;
    for(i=0;i<n;i++)
    {
        c+=i;
        p+=c;
    }
    cout<<p;
    return 0;
}