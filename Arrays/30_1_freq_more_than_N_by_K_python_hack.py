from collections import Counter

def printElements(arr, n, k):
	x = n//k
	# Counting frequency of every element using Counter
	mp = Counter(arr)
	[print(it) for it in mp if mp[it] > x]

if __name__ == '__main__':
	arr = [1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1]
	n = len(arr); k = 4
	printElements(arr, n, k)