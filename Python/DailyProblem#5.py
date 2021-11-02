'''
This problem was asked by Jane Street.

cons(a, b) constructs a pair, and car(pair) and cdr(pair) returns the first and last element of that pair. For example, car(cons(3, 4)) returns 3, and cdr(cons(3, 4)) returns 4.
'''

def cons(a,b):
    def pair(f):
        return f(a,b)
    return pair

def car(pair):
    def return_f(a,b):
        return a
    return pair(return_f)
def cdr(pair):
    def return_l(a,b):
        return b
    return pair(return_l)

print(car(cons(2,3)) )