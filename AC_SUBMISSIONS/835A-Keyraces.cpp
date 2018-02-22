/*
	SubmissionId	:	33600349
	ContestId	:	835
	Index	:	A
	ProblemName	:	Key races
	ProblemTags	:	['math']
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
	ll s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	ll k1,k2;
	k1=(s*v1)+(2*t1);
	k2=(s*v2)+(2*t2);
	if(k1!=k2)
	{
	    cout<<(k1<k2?"First":"Second");
	}
	else
	cout<<"Friendship";
	
	
	return 0;
}
 
/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/