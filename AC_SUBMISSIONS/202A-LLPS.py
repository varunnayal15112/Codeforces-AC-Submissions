/*
	SubmissionId	:	25018161
	ContestId	:	202
	Index	:	A
	ProblemName	:	LLPS
	ProblemTags	:	['binary search', 'bitmasks', 'brute force', 'greedy', 'implementation', 'strings']
	ProgrammingLanguage	:	Python 2
	Verdict	:	OK
*/

string=raw_input()
length=len(string)
hash_=[0 for i in range(0,26)]
for i in range(0,length):
  hash_[ord(string[i])-97]+=1
for i in range(25,-1,-1):
  if hash_[i]>0:
    j=i
    break
ans=""
for i in range(0,hash_[j]):
  ans=ans+chr(j+97)
print ans