/*
	SubmissionId	:	33600381
	ContestId	:	832
	Index	:	A
	ProblemName	:	Sasha and Sticks
	ProblemTags	:	['games', 'math']
	ProgrammingLanguage	:	Python 2
	Verdict	:	OK
*/

(n,k)=raw_input().split()
n=int(n)
k=int(k)
x=n//k
if x%2==0:
  print ("NO")
else:
  print ("YES")