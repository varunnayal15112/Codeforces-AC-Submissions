/*
	SubmissionId	:	23965306
	ContestId	:	758
	Index	:	B
	ProblemName	:	Blown Garland
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
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
{   long int k1;
    char s[1005];
    cin>>s;
    ll l=strlen(s);
    char one,two,three,four;
    for(ll i=0;i<l;i++)
    {
        if(s[i]!='!')
        {
            if((i+1)%4==0)
            {
                one=s[i];
            }
            else if((i+1)%4==1)
            {
                two=s[i];
            }
            else if((i+1)%4==2)
            {
                three=s[i];

            }
            else if((i+1)%4==3)
            {
                four=s[i];
            }

        }

    }
    ll a=0,b=0,c=0,d=0;
    for(ll i=0;i<l;i++)
    {
        if(s[i]=='!')
        {
             if((i+1)%4==0)
            {
                a++;
            }
            else if((i+1)%4==1)
            {
                b++;
            }
            else if((i+1)%4==2)
            {
               c++;

            }
            else if((i+1)%4==3)
            {
                d++;
            }

        }
    }
    if(one=='R')
    {
        cout<<a<<" ";
    }
    if(two=='R')
    {
        cout<<b<<" ";
    }
    if(three=='R')
    {
        cout<<c<<" ";
    }
    if(four=='R')
    {
        cout<<d<<" ";
    }
    if(one=='B')
    {
        cout<<a<<" ";
    }
    if(two=='B')
    {
        cout<<b<<" ";
    }
    if(three=='B')
    {
        cout<<c<<" ";
    }
    if(four=='B')
    {
        cout<<d<<" ";
    }
    if(one=='Y')
    {
        cout<<a<<" ";
    }
    if(two=='Y')
    {
        cout<<b<<" ";
    }
    if(three=='Y')
    {
        cout<<c<<" ";
    }
    if(four=='Y')
    {
        cout<<d<<" ";
    }
    if(one=='G')
    {
        cout<<a<<" ";
    }
    if(two=='G')
    {
        cout<<b<<" ";
    }
    if(three=='G')
    {
        cout<<c<<" ";
    }
    if(four=='G')
    {
    cout<<d<<" ";}
	 return 0 ;
	 //dfghjkl
	 }