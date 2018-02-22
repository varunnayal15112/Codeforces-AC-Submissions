/*
	SubmissionId	:	33600340
	ContestId	:	837
	Index	:	A
	ProblemName	:	Text Volume
	ProblemTags	:	['implementation']
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

long long int exp(long long int value,long long int power)
{
	long long int result=1;
	while(power>0)
	{
		if(power&1LL)
		{
			result*=value;
			result%=mod;
		}
		value*=value;
		value%=mod;
		power/=2LL;
	}
	return result;
}
 
 
ll a[1000005];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int sum,f,cnt,len,row,col,p,q,r,t,i,j,k,l,n,m,x,y,z,b,c;
	cin>>n;
    string st;
    getline(cin,st);
    getline(cin,st);
    ll ans=0;
    cnt=0;
    for(i=0;i<n;i++)
    {
        if(st[i]==' ')
        {
            ans=max(ans,cnt);
            cnt=0;
        }
        else if(st[i]>=65 && st[i]<=90)
            cnt+=1;
    }
    ans=max(ans,cnt);
    cout<<ans;


	  
	
	return 0;
}
 
/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/