import math

''' 
### Proper application of :-
 - POWER OF 2 TRICK
   - T[i,j] = T[i , i + 2^j - 1]
 - DP
   - dp[i][j] = gets the sum of T[i , i + 2^j-1 ]
   - Excitation Case :- dp[i][j] = d[ i ][ j-1 ] + dp[i + 2^j ][ j-1 ]
   - Base Case       :- dp[i][0] = a[0]
'''

def build_sparse_table(arr):
    n = len(arr)
    log = [0] * (n + 1)
    for i in range(2, n + 1):
        log[i] = log[i // 2] + 1
    
    k = log[n] + 1
    sparse_table = [[0] * k for _ in range(n)]
    
    for i in range(n):
        sparse_table[i][0] = arr[i]
    
    j = 1
    while (1 << j) <= n:
        i = 0
        while (i + (1 << j) - 1) < n:
            sparse_table[i][j] = min(sparse_table[i][j - 1], sparse_table[i + (1 << (j - 1))][j - 1])
            i += 1
        j += 1
    
    return sparse_table, log


def query_sparse_table(sparse_table, log, l, r):
    length = r - l + 1
    j = log[length]
    return min(sparse_table[l][j], sparse_table[r - (1 << j) + 1][j])


def print_sparse_table(sparse_table):
    for row in sparse_table:
        print(row)


# Example usage
arr = [2, 5, 3, 7, 1, 8, 4, 6]
sparse_table, log = build_sparse_table(arr)


print("Sparse Table:")
print_sparse_table(sparse_table)


# Example queries
print("\nQuery results:")
print("Minimum in range [1, 5]:", query_sparse_table(sparse_table, log, 1, 5))
print("Minimum in range [3, 6]:", query_sparse_table(sparse_table, log, 3, 6))

