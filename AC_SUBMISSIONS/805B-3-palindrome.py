/*
	SubmissionId	:	26870494
	ContestId	:	805
	Index	:	B
	ProblemName	:	3-palindrome
	ProblemTags	:	['constructive algorithms']
	ProgrammingLanguage	:	Python 2
	Verdict	:	OK
*/

n=raw_input()
n=int(n)
k=n
if k%2!=0:
  k+=1
s=""
f=0
for i in range(0,k//2):
  if f==0:
    s=s+"ab"
    f=1
  else:
    s=s+"ba"
    f=0
ans=s[0:n]
print ans
  