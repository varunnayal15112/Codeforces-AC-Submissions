/*
	SubmissionId	:	33600213
	ContestId	:	907
	Index	:	C
	ProblemName	:	Shockers
	ProblemTags	:	['bitmasks', 'implementation']
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

ll a[1000005];
ll b[1000005];
ll c[1000005];
ll d[1000005];

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
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    long long int min_,max_,ans,n,sum,f,j,cnt,len,row,col,p,q,r,t,i,k,l,m,x,y,z;
    
    ll hash[26]={0};
    cin>>t;
    t=t-1;
    set<char> my_set,ur_set;
    set<char>::iterator it;
    f=0;
    char ch;
    string str;
    cnt=0;
    ans=0;
    ll alpha_count=26;
    while(t--)
    {
        cin>>ch;
        if(ch=='!')
        {
            cin>>str;
            if(ans==1)
            {
                cnt+=1;
            }
            else
            {
                len=str.size();
            if(f==0)
            {
                f=1;
                for(i=0;i<len;i++)
                {
                    if(hash[str[i]-97]!=-1)
                    my_set.insert(str[i]);
                }
            }
            else
            {
                for(i=0;i<len;i++)
                {
                    ur_set.insert(str[i]);
                }
                char array[my_set.size()];
                k=0;
                for(it=my_set.begin();it!=my_set.end();it++)
                {
                    if(ur_set.count(*it)==0)
                    {
                        array[k++]=*it;
                       //my_set.erase(*it);
                    }
                }
                for(i=0;i<k;i++)
                {
                    my_set.erase(array[i]);
                }
                ur_set.clear();
            }    
            }
            
            
        }
        else if(ch=='.')
        {
            cin>>str;
            len=str.size();
            if(f==0)
            {
                for(i=0;i<len;i++)
                {
                    if(hash[str[i]-97]==0)
                    alpha_count-=1;
                    hash[str[i]-97]=-1;
                    
                }
            }
            else
            {
                    for(i=0;i<len;i++)
                {
                    my_set.erase(str[i]);
                }    
            }
            
        }
        else
        {
            cin>>ch;
            if(f==0)
            {
                if(hash[ch-97]==0)
                alpha_count-=1;
                hash[ch-97]=-1;
            }
            else
            {
                my_set.erase(ch);    
            }
            
            if(ans==1)
            cnt+=1;
        }
        if(my_set.size()==1 || alpha_count==1)
        {
            ans=1;
        }
        
    }
    
    cin>>ch;
    cin>>ch;
    cout<<cnt;
    
    return 0;

}

/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/