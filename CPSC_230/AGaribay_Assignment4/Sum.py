#this program is meant to ask the user for how many numbers they have
#Then proceed to ask them for each one of those nubers sto that they may be added up

numbers = float(input("Enter the amount of numbers you would like to be summed together:"))
x = 0

#initilizing while loop

while numbers > 0:
    numbers = numbers -1
    value = float(input("Enter a number:"))
    x = x + value

#sum
print ("You sum is", x)
    


