/*
	SubmissionId	:	17394489
	ContestId	:	581
	Index	:	A
	ProblemName	:	Vasya the Hipster
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int r,b;
    cin>>r>>b;
    cout<<min(r,b)<<" "<<(abs(r-b))/2;
    return 0;
}