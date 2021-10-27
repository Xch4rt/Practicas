'''
cons(a,b) construct a par and car(pair) and cdr(pair) returns the first 
and last element of that pair. For example:
car(cons(3,4)) returns 3, and cdr(cons(3,4)) returns 4

given this implementation of cons

def cons(a,b):
	def pair(f):
		return f(a,b)
	return pair
'''
def a():
	def b():
		return 'hola'
	return b
#print(a()())


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

print(cons(2,3))


