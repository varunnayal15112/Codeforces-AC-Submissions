/*
	SubmissionId	:	25018173
	ContestId	:	776
	Index	:	B
	ProblemName	:	Sherlock and his girlfriend
	ProblemTags	:	['number theory']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286
#define mod 1000000007

using namespace std;

ll a[100005];
ll b[100005];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int f,cnt,len,p,q,r,t,i,j,k,l,n,m,x,y,z,c,s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i]=i+2;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==0)
		{
			b[a[i]-2]=1;
			k=2;
			f=2;
			for(j=f*a[i];j<=(n+1);j=a[i]*f)
			{
				if(b[j-2]==0)
				{
					b[j-2]=k;
				}
				
				f+=1;
			}
		}
	}
	set <ll> se;
	for(i=0;i<n;i++)
	{
		se.insert(b[i]);
	}
	cout<<se.size()<<"\n";
	for(i=0;i<n;i++)
	cout<<b[i]<<" ";
	
	
	
	return 0;
}

/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
