/*
	SubmissionId	:	34744569
	ContestId	:	919
	Index	:	B
	ProblemName	:	Perfect Number
	ProblemTags	:	['binary search', 'brute force', 'dp', 'implementation', 'number theory']
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
double a[1000005];
ll b[1000005];
ll c[1000005];
ll d[1000005];
ll pre_sum[1000005];
ll suf_sum[1000005];

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

ll lcs(string A,string B,ll n,ll m)
{
    ll i,j,lcs_matrix[n+1][m+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0||j==0)
            lcs_matrix[i][j]=0;
            else if(A[i-1]==B[j-1])
            lcs_matrix[i][j]=1+lcs_matrix[i-1][j-1];
        }
    }   
    return lcs_matrix[n][m];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    long long int ans,min_,max_,n,sum,f,j,cnt,len,row,col,p,q,r,t,i,k,l,m,x,y,z;
    cin>>k;
    cnt=0;
    for(i=1;;i++)
    {
        j=i;
        sum=0;
        while(j>0)
        {
            sum+=j%10;
            j/=10;
        }
        if(sum==10)
        {
            cnt+=1;
            if(cnt==k)
            {
                cout<<i;
                break;
            }
        }
    }
    return 0;
 
}
 
/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
