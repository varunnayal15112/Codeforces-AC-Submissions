/*
	SubmissionId	:	33600522
	ContestId	:	234
	Index	:	B
	ProblemName	:	Reading
	ProblemTags	:	['sortings']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286
#define mod 1000000007
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
    if(n<=3)
        return 1;
    if(n%2==0||n%3==0)
        return 0;
    for(ll i=5;i*i<=n;i+=6)
    {
        if(n%i==0||n%(i+2)==0)
            return 0;

    }
    return 1;
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

	long long int f,cnt,len,p,q,r,t,i,j,k,l,n,m,x,y,z,c,s;
	cin>>n>>k;
	ll a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];	
	}
	sort(b,b+n);
	ll ar[k];
	cout<<b[n-k]<<"\n";
	for(i=0;i<k;i++)
	{
		cnt=b[n-i-1];
		for(j=0;j<n;j++)
		{
			if(a[j]>=0 && a[j]==cnt)
			{
				a[j]=-1;
				cout<<j+1<<" ";
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