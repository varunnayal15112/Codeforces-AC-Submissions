/*
	SubmissionId	:	33780343
	ContestId	:	908
	Index	:	B
	ProblemName	:	New Year and Buggy Bot
	ProblemTags	:	['brute force', 'implementation']
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
/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
string per[24];
int gl=0;
void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     per[gl++]=a;
     //cout<<a<<"\n";
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    long long int min_,max_,ans,n,sum,f,j,cnt,len,row,col,p,q,r,t,i,k,l,m,x,y,z;
    
    char str[] = "DLRU";
    len = strlen(str);
    permute(str, 0, len-1); 

    cin>>n>>m;
    char array[n][m];
    ll sx,sy,dx,dy;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            cin>>array[i][j];
            if(array[i][j]=='S')
            {
                sx=i;
                sy=j;
            }
            else if(array[i][j]=='E')
            {
                dx=i;
                dy=j;
            }
        }
            
    string s;
    cin>>s;
    p=s.size();
    cnt=0;
    for(i=0;i<24;i++)
    {
        x=sx,y=sy;
        for(j=0;j<p;j++)
        {
            k=s[j]-48;
            if(per[i][k]=='D')
            {
                y+=1;
            }
            if(per[i][k]=='L')
            {
                x-=1;
            }
            if(per[i][k]=='R')
            {
                x+=1;
            }
            if(per[i][k]=='U')
            {
                y-=1;
            }
            if(x<0 || x>=n || y<0 || y>=m || array[x][y]=='#')
            break;
            else if(array[x][y]=='E')
            {
               // cout<<per[i]<<" ";
                cnt+=1;
                break;
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
