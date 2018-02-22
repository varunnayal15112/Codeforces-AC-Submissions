/*
	SubmissionId	:	25060502
	ContestId	:	779
	Index	:	A
	ProblemName	:	Pupils Redistribution
	ProblemTags	:	['constructive algorithms', 'math']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005];
ll b[100005];
int main(){
	ll n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>k;
		a[k]+=1;
	}
	for(i=0;i<n;i++){
			cin>>k;
			b[k]+=1;
	}
	ll f=0;
	ll cnt=0;
	for(i=1;i<=5;i++){
		
		if((a[i]+b[i])%2!=0)
		{
			f=1;
			break;
		}
		else
		{
            k=abs(a[i]-b[i]);
			cnt+=k/2;
		}
	}
	if(f==0)
		cout<<cnt/2;
	else
		cout<<"-1";
	
	
	return 0;
}