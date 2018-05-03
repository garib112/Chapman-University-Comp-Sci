import java.util.Scanner;
import java.util.InputMismatchException;

public class ConnectFour
{
	public static void main(String[] args)
	{
		ConnectFour game = new ConnectFour();
		game.start();
	}

	public char[][] grid;

	public char currentPlayer;

	public ConnectFour()
	{
		this.grid = new char[7][6];
		

		for (int i = 0; i < 7; i++)
		{
			for(int j = 0 ; j < 6; j++)
			{
			this.grid[i][j] = 'O';	
			}
		}
		this.currentPlayer = 'R';
	}

	public void start()
	{	
		//this displays game information
		System.out.println("0123456");
		System.out.println("-------");
		this.displayBoard();
		System.out.println("-------");
		System.out.println("It is player " + currentPlayer + "'s turn");


		while(true)
		{
			Coordinate c = this.askForMove();

			this.playMove(c);

			//this displays game information
			System.out.println("-----------------------");
			System.out.println("0123456");
			System.out.println("-------");
			this.displayBoard();
			System.out.println("-------");

			char outcome = this.determineOutcome(this.currentPlayer);
			if (outcome != 'z')
			{
				this.displayWinner(outcome);
				break;
			}
			if(this.currentPlayer == 'R') this.currentPlayer = 'Y';
			else this.currentPlayer = 'R';

			System.out.println("It is player " + currentPlayer + "'s turn");
		} 
	}

	public Coordinate askForMove()
	{
		Scanner keyboard = new Scanner(System.in);
		while(true)
		{
			try
			{
				System.out.println("Enter an number between 0-6 for the colummn you want");
				int x = keyboard.nextInt();

				while(x > -1 || x < 7)
				{
				for(int j = 0 ; j < 6 ; j++)
				{
					if(this.grid[x][j] != 'R' && this.grid[x][j] != 'Y')
						{
						return new Coordinate (x,j);
						}
				}
				}
			}
			catch(InputMismatchException e)
			{
				keyboard.nextLine();
			}
			System.out.println("Invalid! Try again.");
			this.displayBoard();

		}
	}
	public void playMove(Coordinate c)
	{
		this.grid[c.x][c.y] = this.currentPlayer;
	}


	// R = Red player/Player 1
	// Y = Yellowe player/Player 2
	// z = no outcome
	// w = tie
	public char determineOutcome(char currentPlayer)
	{
		int counter = 0;

		//horizontal
		for(int i = 0 ; i < 7; i++)
		{
			for(int j = 0; j < 6; j++)
				{
					if(this.grid[i][j] == currentPlayer)
					{
						counter += 1;
					}
					else
					{
						counter = 0;
					}
					if(counter >= 4)
					{
						if(currentPlayer == 'R')
						{
							return 'R';
						}
						else if (currentPlayer == 'Y')
						{
							return 'Y';
						}
					}
				}
		}

		//vertically
		for(int j = 0 ; j < 6; j++)
		{
			for(int i = 0; i < 7; i++)
				{
					if(this.grid[i][j] == currentPlayer)
					{
						counter += 1;
					}
					else
					{
						counter = 0;
					}
					if(counter >= 4)
					{
						if(currentPlayer == 'R')
						{
							return 'R';
						}
						else if (currentPlayer == 'Y')
						{
							return 'Y';
						}
					}
				}
		}
		if(this.didTie())
		{
			return 'w';
		}
		return 'z';
	}

	public boolean didTie()
	{
		for (int i = 0; i < 7; i++)
		{
			for(int j = 0 ; j < 6; j++)
			{
				if(this.grid[i][j] == 'O')
				{
					return false;
				}
			}
		}
		return true;
	}

	public void displayBoard()
	{
		for(int j = 5; j >= 0; j--)
		{
			for(int i = 0; i < 7 ; i++)
			{
				System.out.print(this.grid[i][j]);
			}
			
			System.out.println("");
		}
	}

	public void displayWinner(char outcome)
	{
		if(outcome == 'w')
		{
			System.out.println("Tie!");
		}
		else
		{
			System.out.println("Winner Player " + outcome + "!");
		}
	}
}