'''
Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3
'''
list_ = [1,2,0]
def solution(n):
    n.sort()
    next_n = 1
    for x in n:
        if x > 0:
            if x > next_n:
                break
            else:
                next_n = x + 1
    return next_n

print(solution(list_))