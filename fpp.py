from random import randint

z = randint(2,5)

quad = lambda x: x*x + z*x +1
a = int(input("X: "))
print(quad(a))

l = [1,2,3,4]
s = list(map(lambda x: quad(x),l))
print(s)
