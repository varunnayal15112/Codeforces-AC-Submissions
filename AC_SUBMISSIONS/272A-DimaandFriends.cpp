/*
	SubmissionId	:	18334730
	ContestId	:	272
	Index	:	A
	ProblemName	:	Dima and Friends
	ProblemTags	:	['implementation', 'math']
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
	long long int s=0,k,i,j=0,n,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>k;
		s+=k;
	}
	long long int a[5];
	for(i=0;i<5;i++)
	{
		a[i]=s+i;
	}
	m=n+1;
	for(i=0;i<5;i++)
	{
		if(a[i]%m==0)
		j+=1;
	}
	cout<<5-j;

	
	
	return 0;
}

