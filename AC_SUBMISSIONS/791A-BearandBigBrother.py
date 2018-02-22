/*
	SubmissionId	:	33600407
	ContestId	:	791
	Index	:	A
	ProblemName	:	Bear and Big Brother
	ProblemTags	:	['implementation']
	ProgrammingLanguage	:	Python 2
	Verdict	:	OK
*/

a,b=raw_input().split()
a=int(a)
b=int(b)
cnt=0
while a<=b:
  cnt+=1
  a*=3
  b*=2
print cnt