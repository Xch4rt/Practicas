'''
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17
'''
list_ = [10, 15, 3, 7]
list_.sort()
par = []
k = 13
for x in list_:
    if k - x in list_:
        par.append(x)
print(par)

