'''
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?
'''
list_, list1 = [1, 2, 3, 4, 5], []
prod = 1
for x in range(len(list_)):
    for y in range(len(list_)):
        if y != x:
            prod = prod * list_[y]
    list1.append(prod)
    prod = 1
print(list1)
