# this program is to sovle a quadratic equation with the quadratic formula

import math

a_str = input("Enter the a variable:")
a_float = float (a_str)

b_str = input("Enter the b variable:")
b_float = float (b_str)

c_str = input("Enter the c variable:")
c_float = float(c_str)


answer1 = math.sqrt(b_float**2 - 4*a_float*c_float)
answer2 = -b_float + answer1
answer3 = answer2/2
answer02 = -b_float - answer1
answer03 = answer02/2

print("x1 =",answer3,"and x2 =",answer03,)



