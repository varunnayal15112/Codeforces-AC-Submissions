/*
	SubmissionId	:	34170926
	ContestId	:	219
	Index	:	A
	ProblemName	:	k-String
	ProblemTags	:	['implementation', 'strings']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>
 
typedef long long ll;
typedef unsigned long long ull;
 
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286
#define mod 1000000007
#define diff 1000014129
 
using namespace std;
 
bool isprime(ull n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ull i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
 
long long int gcd(long long int a,long long int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
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
 
long long int lcm(ll n1,ll n2)
{
    ll max = (n1 > n2) ? n1 : n2; // maximum value between n1 and n2 is stored in max
    do {
        if (max%n1 == 0 && max%n2 == 0) {
            return max;
        }
        else
            ++max;
    }
    while (true);
}
 
int isprime(ll n)
{
    if(n==1)
    return 0;
    if(n <= 3)
        return 1;
    if(n%2 == 0 || n%3 == 0)
        return 0;
    for(ll i = 5 ; i*i <= n ; i+=6)
    {
        if(n%i == 0 || n%(i+2) == 0)
            return 0;
    }
    return 1;
}

ll pre_sum[1000005];
ll a[1000005];
ll b[1000005];
ll c[1000005];
ll d[1000005];
/*
bool ispalin(ll n)
{
    ll k=0;
    while(n>0)
    {
        a[k]=n%10;
        k+=1;
        n/=10;
    }
    for(ll i=0;i<(k/2);i++)
    {
        if(a[i]!=a[k-i-1])
        return false;
    }
    return true;
}
bool comp(pair<ll,ll>x ,pair<ll,ll> y)
{
    if(x.first<y.first)
    return true;
    else if(x.first==y.first)
    {
        if(x.second<=y.second)
        return true;
        else
        return false;
    }
    else return false;
}
*/

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    long long int cnt,min_,max_,ans,n,sum,f,j,len,row,col,p,q,r,t,i,k,l,m,x,y,z;
    cin>>k;
    string s;
    cin>>s;
    ll hash[26]={0};
    len=s.size();
    for(i=0;i<len;i++){
        hash[s[i]-97]+=1;
    }
    f=0;
    ll count_len[26]={0};
    for(i=0;i<26;i++)
    {
        if(hash[i]%k!=0)
        {
            cout<<"-1";
            return 0;
        }
        else
        {
            count_len[i]=hash[i]/k;
        }
    }
    while(k--)
    {
        for(i=0;i<26;i++)
        {
            if(hash[i]>0)
            {
                for(j=0;j<count_len[i];j++)
                cout<<(char)(i+97);
            }
        }
    }
    return 0;
 
}
 
/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/