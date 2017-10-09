#!/usr/bin/python

class Solution(object):
	
	
	def combinationSum(self, candidates, target):
		"""
		:type candidates: List[int]
		:type target: int
		:rtype: List[List[int]]
		"""
		candidates.sort()
		self.cutcandidates(candidates,target)
		reList = self.recursionSum(candidates,target)

		if reList == None:
			return None
		for lists in reList:
			lists.sort()
		return reList
		
	def recursionSum(self,candidates,target):
		if target == 0:
			return [[]]
		candidates = self.cutcandidates(candidates, target)
		
		if not candidates:
			return None
		
		reList = []
		for num in candidates:
			tempList = self.recursionSum(candidates[candidates.index(num):], target - num)
			if tempList != None:
				for lists in tempList:
					lists.append(num)
				reList += tempList
		
		
		if reList != [[]]: 
			return reList
		else:
			return None
		
	def cutcandidates(self,candidates,target):
		i = 0
		while i <len(candidates):
			if candidates[i] > target:
				break
			i += 1
		return candidates[:i]
		
		
sol = Solution()
sol.combinationSum([2,3,4,1,5,6,7,9], 9)