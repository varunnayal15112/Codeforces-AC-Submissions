/*
	SubmissionId	:	33600474
	ContestId	:	764
	Index	:	B
	ProblemName	:	Timofey and cubes
	ProblemTags	:	['constructive algorithms', 'implementation']
	ProgrammingLanguage	:	Python 2
	Verdict	:	OK
*/

def swap(a,b):
  k=a
  a=b
  b=k
  return (a,b)
n=raw_input()
n=int(n)
my_list=map(int,raw_input().split())
for i in range(0,n/2):
  if (i%2)==0:
    (my_list[i],my_list[n-i-1])=swap(my_list[i],my_list[n-i-1])
str_list=[str(a) for a in my_list]
print ' '.join(str_list)