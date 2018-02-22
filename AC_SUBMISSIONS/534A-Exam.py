/*
	SubmissionId	:	25018163
	ContestId	:	534
	Index	:	A
	ProblemName	:	Exam
	ProblemTags	:	['constructive algorithms', 'implementation']
	ProgrammingLanguage	:	Python 3
	Verdict	:	OK
*/

n=input()
n=int(n)
array=[]
if n==1 or n==2:
  print (1)
  print (1)
elif n==3:
  print (2)
  print (1,3)
elif n%2==0:
  a=n//2
  b=n
  k=0
  for i in range(0,n//2):
    array.extend([a,b])
    a-=1
    b-=1
    k+=2
  print (k)
  print (*array)
else:
  x=n-1
  a=x//2
  b=x
  k=1
  for i in range(0,x//2):
    array.extend([a,b])
    a-=1
    b-=1
    k+=2
  print (k)
  array.append(n)
  print (*array)


  