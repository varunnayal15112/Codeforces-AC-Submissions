/*
	SubmissionId	:	33600472
	ContestId	:	766
	Index	:	A
	ProblemName	:	Mahmoud and Longest Uncommon Subsequence
	ProblemTags	:	['constructive algorithms', 'strings']
	ProgrammingLanguage	:	Python 2
	Verdict	:	OK
*/

str1=raw_input()
str2=raw_input()
if str1==str2:
  print ("-1")
else:
  k=max(len(str1),len(str2))
  print k