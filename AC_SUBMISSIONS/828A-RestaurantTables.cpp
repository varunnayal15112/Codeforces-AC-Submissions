/*
	SubmissionId	:	33600399
	ContestId	:	828
	Index	:	A
	ProblemName	:	Restaurant Tables
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++14
	Verdict	:	OK
*/

#include<bits/stdc++.h>
 
typedef long long ll;
typedef unsigned long long ull;
 

 
using namespace std;
 
 


int main()
{
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	long long int a,d,hash[61],s,f,cnt,len,row,col,p,q,r,t,x,i,j,k,l,n,m,y,z,b,c;
	cin>>n>>a>>b;
  s=0;
  k=0;
  for(i=0;i<n;i++)
  {
    cin>>x;
    if(x==1)
    {
        if(a>0)
        {
            a-=1;
        }
        else if(b>0)
        {
            b-=1;
            k+=1;
        }
        else if(k>0)
        {
            k-=1;
        }
        else
        s+=1;
    }
    else
    {
        if(b>0)
        {
            b-=1;
        }
        else
        s+=2;
    }
  }
  cout<<s;
	
	return 0;
}
 
/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
 