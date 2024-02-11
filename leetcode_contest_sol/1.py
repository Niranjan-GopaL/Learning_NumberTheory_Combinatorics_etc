def modifiedMatrix(matrix):
    """
    :type matrix: List[List[int]]
    :rtype: List[List[int]]
    """

    m = len(matrix)
    n = len(matrix[0])
    
    answer = [ [0]*n for _ in range(m) ]

    max_a = 0
    for j in range(n):
        for i in range(m):
            answer[i][j] = matrix[i][j]
            max_a = max(max_a, matrix[i][j])
        
        for i in range(m):
            if answer[i][j] == -1 :
                answer[i][j] = max_a
    return answer


queries = [
    [[1,2,-1],[4,-1,6],[7,8,9]],
    [[3,-1],[5,2]]
]


for i in queries:
    print(modifiedMatrix(i))
