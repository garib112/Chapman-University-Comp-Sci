import java.util.Scanner

public class Ch3Ex10
{
	public static void main (String[] args)
	{
		Scanner keyboard = new Scanner (Syste.in)
		die = (int)(Math.random()*6+1);
		cpuDie = (int)(Math.random()*6+1);
		String
		int score = 0;
		int turnScore = 0;
		int cpuScore = 0;
		int turnScoreCpu = 0;

		System.out.println("This is the game of pig. \n \
		 The objective of the game is to roll a die and collect a total of 100 points. \n \
		 You can roll as many times per turn and collect as many points \n \
		 you want until you decide to bank your points. \n \
		 You will also be going against a computer so you have to be careful. \n \
		 Also if you roll a 1 whatever points you earned for that trun are lost. \n \
		 You You are Player 1 and you get to go first.")
		String start = keyboard.nextLine();

		while (die != 0)
		{
			if (score >= 100)
				{
					System.out.println("You Won!");
					break;
				}
			else if (cpuScore >= 100)
				{
					System.out.println("You lose!");
					break;
				}

			System.out.println("The current score is, Your Score:" + score + "Computer's Score:" + cpuScore);

    		die = 1
   			score = 0
    		while (1 <= die <= 6)
    		{
        		die = (int)(Math.random()*6+1);
        		if (die >= 2)
        		{
            		System.out.println (" You rolled :" + die)
            		turnScore += die
            		System.out.println ("Your current turn score is:" + turnScore)
            		choice = input ("Will you 'roll' or hold'?")
            	}
            	if choice == 'roll':
            	{
                	roll = 0
                	print ("You rolled :" , die)
                	turn_score += die
                	print ("Your turn score is:" , turn_score)
                	random.randint (1,6)
                }
           		else if (die == 1)
           		{
               		print ("You rolled a 1, your turn is over.")
                	turn_score = 0
                	die = 7
                }
            	else if choice == 'hold':
            	{
                	roll = 0
                	score += turn_score
                	print ("Your turn is over! Your current points are:" , score)
                	die = 7
                	print ("It is now the computers turn!")
                }
             
    		while 1 <= cpu_die <= 6:
    		{
        		cpu_die = random.randint(1,6)
        		if cpu_die == 1:
        		{


           			print ("The CPU rolled a 1, your turn is over.")
            		turn_scorecpu = 0
            		cpu_die = 7
            	}
        		elif die >= 2:
        		{
            		print (" The CPU rolled :" , cpu_die)
            		turn_scorecpu += cpu_die
            		print ("The CPU's current turn score is:" , turn_scorecpu)
            		cpu_str = ("The CPU's turn is  over! Press enter to start your turn!")
            		cpu_score += turn_scorecpu
            		if cpu_score >= 20:
            		{
                		print ("The CPU has decided to hold. Its current points are:" , turn_scorecpu)
                		cpu_die = 7
                	}
                }
            }
         	}
		}


	}
}