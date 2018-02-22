/*
	SubmissionId	:	17387220
	ContestId	:	230
	Index	:	A
	ProblemName	:	Dragons
	ProblemTags	:	['greedy', 'sortings']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

﻿#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286
using namespace std;
bool isprime(ull n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ull i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int s,n;
	cin>>s>>n;
	long long int b[n],a[n][2],d[n][2],i,j,k;
	for(i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
		b[i]=a[i][0];
	}
	sort(b,b+n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i]==a[j][0])
			{
				d[i][0]=a[j][0];
				d[i][1]=a[j][1];
                                                          a[j][0]=0;
				break;
			}
		}
	}
	long long int cnt=0;
	for(i=0;i<n;i++)
	{
		if(s>d[i][0])
		{
			s+=d[i][1];
			cnt+=1;
		}
	}
	if(cnt==n)
	cout<<"YES";
	else
	cout<<"NO";
	
	
	
	
	return 0;
}

