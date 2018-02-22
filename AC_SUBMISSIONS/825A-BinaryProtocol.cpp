/*
	SubmissionId	:	33600345
	ContestId	:	825
	Index	:	A
	ProblemName	:	Binary Protocol
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
	cin>>st;
	l=st.size();
	cnt=0;
	for(i=0;i<l;i++)
	{
	    if(st[i]=='1')
	    {
	        cnt+=1;
	    }
	    else
	    {
	        if(st[i-1]=='0')
	            cout<<"0";
	        else
	        {
	            cout<<cnt;
	            cnt=0;
	        }
	    }
	}

	    cout<<cnt;
	
	return 0;
}
 
/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/