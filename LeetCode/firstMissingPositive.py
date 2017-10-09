#!/usr/bin/python

class Solution(object): 
	def firstMissingPositive(self, nums):
		"""
		:type nums: List[int]
		:rtype: int
		"""
		
		it = self.integerIter()
		for num in nums:
			it = filter(self.notNum(num),it)
		print(next(it))

		
	def notNum(self,num):
		return lambda x:x!=num 
		
	def integerIter(self):
		n = 0
		while True:
			n += 1
			yield n
			

		
Sol = Solution()
Sol.firstMissingPositive([0])
