/*
	SubmissionId	:	20640815
	ContestId	:	579
	Index	:	A
	ProblemName	:	Raising Bacteria
	ProblemTags	:	['bitmasks']
	ProgrammingLanguage	:	GNU C++11
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
ll x,n,i,a[200005],cntl=0,cntr=0,r=0;
cin>>x;
if((x&(x-1))==0)
{

    cout<<"1";
    return 0;
}
while(x!=1)
{
    if(x%2==0)
        x/=2;
    else
    {

        cntl+=1;
        x--;
    }

}
cout<<cntl+1;
return 0;
}