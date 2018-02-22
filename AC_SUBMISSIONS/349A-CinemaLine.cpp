/*
	SubmissionId	:	17429583
	ContestId	:	349
	Index	:	A
	ProblemName	:	Cinema Line
	ProblemTags	:	['greedy', 'implementation']
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
	long long int n;
	cin>>n;
	long long int a[n],i,j,k,tf=0,ff=0,hh=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]==25)
		tf+=1;
		else if(a[i]==50)
			{
				ff+=1;
				if(tf>0)
				tf-=1;
				else
				{
					cout<<"NO";
					return 0;
				}
			}
			else if(a[i]==100)
				{
					hh+=1;
					if(tf>0&&ff>0)
					{
						tf-=1;
						ff-=1;
					}
                                                                         else if(tf>=3)
                                                                                   tf-=3;
					else {
						cout<<"NO";
						return 0;
					}
				}
	}
	cout<<"YES";
	return 0;
}

