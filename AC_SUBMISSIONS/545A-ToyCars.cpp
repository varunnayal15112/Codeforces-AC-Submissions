/*
	SubmissionId	:	17356851
	ContestId	:	545
	Index	:	A
	ProblemName	:	Toy Cars
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286
using namespace std;
bool isprime(ull n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ull i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int n,i,j;
	cin>>n; 
	long long int a[n],k=0,f,y;
	long long int p[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>p[i][j];
	for(i=0;i<n;i++){
		f=0;
		for(j=0;j<n;j++){
			if(p[i][j]==1||p[i][j]==3)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			a[k]=i+1;
			k+=1;
		}
	}
	cout<<k<<"\n";
	for(i=0;i<k;i++)
	cout<<a[i]<<" ";
	return 0;
}

