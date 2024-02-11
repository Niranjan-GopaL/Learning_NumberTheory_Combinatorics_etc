def f(nums, pattern):
    count = 0 ; n = len(nums); m = len(pattern)
    # found this when I was optimising the loop range for i
    if n<m: return 0

    # nice optimisation, i -> 0 to n-m  
    # [ 0 ... n-mth index]
    for i in range(n-m):
        flag = 1
        for k in range(m):
            # Entire logic :-
            # if pattern[k] == 1 and (the rule) was NOT followed, BREAK
            # if the inner loop broke out BEFORE reaching k = m-1 :
            # that means `the subsequence starting from i` <--- CAN'T BE VALID

            # This code has a CRITICAL EDGE CASE:-
            # if pattern is OF ONE ELEMENT, 
            # then we can't differentiate the inner loop COMPLETING and inner loop BREAKING
            # => So we'll have to use flag

            # [1,2,3,4,5,6] 
            # [1,1] 
            # the range optimisation with i removed the need of checking 
                                        #  if i + k + 1 is in range
            if pattern[k] == 1   and   nums[i + k + 1] <= nums[i + k]   : print("K WHEN break is being called ", k ); flag = 0 ; break
            if pattern[k] == 0   and   nums[i + k + 1] != nums[i + k]   : print("K WHEN break is being called ", k ); flag = 0 ; break
            if pattern[k] == -1  and   nums[i + k + 1] >= nums[i + k]   : print("K WHEN break is being called ", k ); flag = 0 ; break
        print("value of k at the end of loop : ", k)
        if k==m-1 and flag : count+=1; print("the subsequence start with ------> ", nums[i])
    return count

# New knowledge : at the end of the loop the value of k is RANGE(arg) - 1 ; 
# for i in range(10): pass;  
# at the end of loop will have `i = 9`

q = [
        [ [1,2,3,4,5,6] , [1,1] ] ,
        [ [1,4,4,1,3,5,5,3], [1,0,-1] ],
        [ [2,1,2], [1]]
    ]

for l in q:
    print(f(l[0], l[1]))