/*
	SubmissionId	:	23467464
	ContestId	:	3
	Index	:	A
	ProblemName	:	Shortest path of the king
	ProblemTags	:	['greedy', 'shortest paths']
	ProgrammingLanguage	:	GNU C++11
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

ll a[100005];

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int f,cnt,len,p,q,r,i,j,k,l,n,m,x,y,z,b,c;
	string s,t,ans;
	k=0;
	cin>>s;
	cin>>t;
	cnt=0;
	while(s[0]!=t[0] || s[1]!=t[1])
	{
	//	cout<<s<<" "<<t<<"\n";
		cnt+=1;
		if((s[0]<t[0]) && (s[1]>t[1]))
		{
			ans[k++]='R';
			ans[k++]='D';
			ans[k++]='.';
			s[0]+=1;
			s[1]-=1;
		}
		else if((s[0]>t[0]) && (s[1]>t[1]))
		{
			ans[k++]='L';
			ans[k++]='D';
			ans[k++]='.';
			s[0]-=1;
			s[1]-=1;
		}
		else if((s[0]<t[0]) && (s[1]<t[1]))
		{
			ans[k++]='R';
			ans[k++]='U';
			ans[k++]='.';
			s[0]+=1;
			s[1]+=1;
		}
		else if((s[0]>t[0]) && (s[1]<t[1]))
		{
			ans[k++]='L';
			ans[k++]='U';
			ans[k++]='.';
			s[0]-=1;
			s[1]+=1;
		} 
		else if((s[0]==t[0]) && (s[1]<t[1]))
		{
			ans[k++]='U';
			ans[k++]='.';
			s[1]+=1;
		}
		else if((s[0]==t[0]) && (s[1]>t[1]))
		{
			ans[k++]='D';
			ans[k++]='.';
			s[1]-=1;
		}
		else if((s[0]<t[0]) && (s[1]==t[1]))
		{
			ans[k++]='R';
			ans[k++]='.';
			s[0]+=1;
		}
		else if((s[0]>t[0]) && (s[1]==t[1]))
		{
			ans[k++]='L';
			ans[k++]='.';
			s[0]-=1;
		}
	}
	cout<<cnt<<"\n";
	for(i=0;i<k;i++)
	{
		if(ans[i]!='.')
		cout<<ans[i];
		else
		cout<<"\n";
	}

	return 0;
}

/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/


