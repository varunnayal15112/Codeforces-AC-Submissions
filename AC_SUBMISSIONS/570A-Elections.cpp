/*
	SubmissionId	:	17394242
	ContestId	:	570
	Index	:	A
	ProblemName	:	Elections
	ProblemTags	:	['implementation']
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
	long long int n,m;
	cin>>n>>m;
	long long int v[m][n],i,j,k;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>v[i][j];
	long long int c[n]={0},ind;
	for(i=0;i<m;i++)
	{
		k=0;ind=0;
		for(j=0;j<n;j++)
		{
			if(v[i][j]>k)
			{
				k=v[i][j];
				ind=j;
			}
		}
		c[ind]+=1;
	}
	k=0;
	for(i=0;i<n;i++)
	{
		if(c[i]>k)
		{
			k=c[i];
			ind=i;
		}
	}
	cout<<ind+1;
	
	
	
	
	return 0;
}

