# this program is to solve a quadratic equation with the quadratic formula

import math

a = int(input("Enter the a variable:"))

b = int(input("Enter the b variable:"))

c = int(input("Enter the c variable:"))


d = b**2 - (4*a*c)

while d < 0:
    print ("The discriminate is a negative number,please enter new coefficient values")
    a = int(input("Enter the a variable:"))
    b = int(input("Enter the b variable:"))
    c = int(input("Enter the c variable:"))


x1 = (-b + math.sqrt(b**2 - 4*a*c))/2*a
x2 = (-b - math.sqrt(b**2 - 4*a*c))/2*a
print("x1 =",x1,"and x2 =",x2,)





