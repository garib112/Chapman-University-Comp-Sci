# this program asks for a letter grade from A+ to F
#it then returns that into a grade point average.
import math

gradeletter = input("Please enter your letter grade:")

if gradeletter == "A+":
    print("Your grade point average is 4.33")
elif gradeletter == "A":
    print("Your grade point average is 4.0")
elif gradeletter == "A-":
    print("Your grade point average is 3.67")
elif gradeletter == "B+":
    print("Your grade point average is 3.33")
elif gradeletter == "B":
    print("Your grade point average is 3.0")
elif gradeletter == "B-":
    print("Your grade point average is 2.67")
elif gradeletter == "C+":
    print("Your grade point average is 2.33")
elif gradeletter == "C":
    print("Your grade point average is 2.0")
elif gradeletter == "C-":
    print("Your grade point average is 1.67")
elif gradeletter == "D+":
    print("Your grade point average is 1.33")
elif gradeletter == "D":
    print("Your grade point average is 1.0")
elif gradeletter == "F":
    print("Your grade point average is 0.0")
