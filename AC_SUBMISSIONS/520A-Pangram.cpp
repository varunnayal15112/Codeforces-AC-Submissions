/*
	SubmissionId	:	33600387
	ContestId	:	520
	Index	:	A
	ProblemName	:	Pangram
	ProblemTags	:	['implementation', 'strings']
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
	cin>>n;
  	string str;
  	cin>>str;
  	ll hash[26]={0};
  	for(i=0;i<n;i++)
    {
      	if(str[i]>=65 && str[i]<=90)
          	hash[str[i]-65]+=1;
      	else
          	hash[str[i]-97]+=1;
    }
  	f=0;
  	for(i=0;i<26;i++)
    {
      	if(hash[i]==0)
        {
          	f=1;
          break;
        }
    }
  if(f==0)
    	cout<<"YES";
  else
    cout<<"NO";

     return 0;
}
 
/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/