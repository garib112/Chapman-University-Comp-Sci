#this program will play the game of pig with a computer

import random

die = random.randint (1,6)
cpu_die = random.randint (1,6)
choice = ' '
score = 0
turn_score = 0
cpu_score = 0
turn_scorecpu = 0

print ("This is the game of pig. \n \
The objective of the game is to roll a die and collect a total of 100 points. \n \
You can roll as many times per turn and collect as many points \n \
you want until you decide to bank your points. \n \
You will also be going against a computer so you have to be careful. \n \
Also if you roll a 1 whatever points you earned for that trun are lost. \n \
You You are Player 1 and you get to go first.")
start_str = input ("Press enter to start the game!")

while die !=0:
    if score >= 100:
        print("You Won!")
        break
    elif cpu_score >=100:
        print("You Lose!")
        break
    
    print("The current score is, Your Score:", score, "Computer's Score:", cpu_score)
    die = 1
    score = 0
    while 1 <= die <= 6:
        die = random.randint(1,6)
        if die >= 2:
            print (" You rolled :" , die)
            turn_score += die
            print ("Your current turn score is:" , turn_score)
            choice = input ("Will you 'roll' or hold'?")
            if choice == 'roll':
                roll = 0
                print ("You rolled :" , die)
                turn_score += die
                print ("Your turn score is:" , turn_score)
                random.randint (1,6)
            elif die == 1:
                print ("You rolled a 1, your turn is over.")
                turn_score = 0
                die = 7
            elif choice == 'hold':
                roll = 0
                score += turn_score
                print ("Your turn is over! Your current points are:" , score)
                die = 7
                print ("It is now the computers turn!")
             
    while 1 <= cpu_die <= 6:
        cpu_die = random.randint(1,6)
        if cpu_die == 1:
            print ("The CPU rolled a 1, your turn is over.")
            turn_scorecpu = 0
            cpu_die = 7
        elif die >= 2:
            print (" The CPU rolled :" , cpu_die)
            turn_scorecpu += cpu_die
            print ("The CPU's current turn score is:" , turn_scorecpu)
            cpu_str = ("The CPU's turn is  over! Press enter to start your turn!")
            cpu_score += turn_scorecpu
            if cpu_score >= 20:
                print ("The CPU has decided to hold. Its current points are:" , turn_scorecpu)
                cpu_die = 7
            
