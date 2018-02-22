/*
	SubmissionId	:	16265739
	ContestId	:	519
	Index	:	A
	ProblemName	:	A and B and Chess
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	GNU C++
	Verdict	:	OK
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int w=0,b=0,i,j;
	char a[8][8];
	for(i=0;i<8;i++)
	{
		cin>>a[i];
		for(j=0;j<8;j++)
		{
			char c=a[i][j];
			switch(c)
			{
				case 'Q':
					{
						w+=9;
						break;
					}
				case 'R':
					{
						w+=5;
						break;
					}
				case 'B':
					{
						w+=3;
						break;
					}
				case 'N':
					{
						w+=3;
						break;
					}
				case 'P':
					{
						w+=1;
						break;
					}	
					case 'q':
					{
						b+=9;
						break;
					}
				case 'r':
					{
						b+=5;
						break;
					}
				case 'b':
					{
						b+=3;
						break;
					}
				case 'n':
					{
						b+=3;
						break;
					}
				case 'p':
					{
						b+=1;
						break;
					}
						
			}		
		}
	}
	if(w>b)
	cout<<"White";
	else if(w==b)
	cout<<"Draw";
	else cout<<"Black";
	return 0;
}