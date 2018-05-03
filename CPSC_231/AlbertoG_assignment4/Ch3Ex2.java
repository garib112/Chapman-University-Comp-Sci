
public class Ch3Ex2
{

public static void main (String[] args)
{
	int wins = 0;
	int loss = 0;

	for (int i = 0; i < 10000; i++)
	{
		System.out.println("roll the dice");
		int score = (int)(Math.random()*12 + 1);
		System.out.println(" score" + score);

		if (score == 7 || score == 11)
			{
				System.out.println(" Score = " + score);
				System.out.println("You win");
				wins = wins + 1;
			}
		else if (score == 2 || score == 3 || score == 12)
			{
				System.out.println(" Score = " + score);
				System.out.println("You lose");
				loss = loss + 1;		
			}
		else 
			{	
				int point = score;
				System.out.println(" Point = " + point);
				while (true)
					{
						score = (int)(Math.random()*12 + 1);
						System.out.println("Score new = "+ score);
						if (score == point)
							{
								System.out.println(" you win");
								wins = wins + 1;
								break;
							}
						if (score == 7)
							{
								System.out.println(" you lose");
								loss = loss + 1;
								break;
							}

					}
			}
	}
	System.out.println("\n number of wins = " + wins + " and the number of loss = " + loss + " and the probability for winning a game = " + (double) wins / (wins + loss));
}
}
