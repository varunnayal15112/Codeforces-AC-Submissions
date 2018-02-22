/*
	SubmissionId	:	28234227
	ContestId	:	822
	Index	:	A
	ProblemName	:	I'm bored with life
	ProblemTags	:	['implementation', 'math', 'number theory']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>
 
typedef long long ll;
typedef unsigned long long ull;
 
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286
#define mod 1000000007
 
using namespace std;
 
 
int isprime(ll n)
{
    if(n <= 3)
        return 1;
    if(n%2 == 0 || n%3 == 0)
        return 0;
    for(ll i = 5 ; i*i <= n ; i += 6)
    {
        if(n%i == 0 || n%(i+2) == 0)
            return 0;
    }
    return 1;
}
 
ll a[100005];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int sum,f,cnt,len,row,col,p,q,r,t,i,j,k,l,n,m,x,y,z,b,c;
	cin>>x>>y;
  	k=min(x,y);
  	sum=1;
  	for(i=1;i<=k;i++)
      sum=sum*i;
  	cout<<sum;
 	return 0;
}
 
/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
