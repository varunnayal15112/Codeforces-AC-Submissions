/*
	SubmissionId	:	33600478
	ContestId	:	764
	Index	:	A
	ProblemName	:	Taymyr is calling you
	ProblemTags	:	['brute force', 'implementation', 'math']
	ProgrammingLanguage	:	Python 2
	Verdict	:	OK
*/

import fractions
def lcm(a,b): return abs(a * b) / fractions.gcd(a,b)
n,m,z=raw_input().split()
n=int(n)
m=int(m)
z=int(z)
print (z/lcm(n,m))