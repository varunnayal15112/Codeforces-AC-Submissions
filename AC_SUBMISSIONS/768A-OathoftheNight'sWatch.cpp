/*
	SubmissionId	:	25018249
	ContestId	:	768
	Index	:	A
	ProblemName	:	Oath of the Night's Watch
	ProblemTags	:	['constructive algorithms', 'sortings']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

ll a[100005];

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int f,cnt,len,p,q,r,t,i,j,k,l,n,m,x,y,z,b,c,s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll min_=a[0];
	ll max_=a[n-1];
	cnt=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>min_ && a[i]<max_)
		cnt+=1;
	}
	cout<<cnt;

	return 0;
}

/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
