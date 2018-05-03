import java.util.Scanner;
import java.util.InputMismatchException;

public class TicTacToe
{
	public static void main(String[] args)
	{
		TicTacToe game = new TicTacToe();
		game.start();
	}
	
	/* instance properties: */
	
	// 0 = no outcome
	// 1 = player1
	// 2 = player2
	public int[][] grid;
	
	// 1 = player1
	// 2 = player2
	public int currentPlayer;
	
	// constructor
	public TicTacToe()
	{
		this.grid = new int[3][3];
		this.currentPlayer = 1;
	}
	
	public void start()
	{
		this.displayBoard();
		
		while(true)
		{
			Coordinate c = this.askForMove();
			
			this.playMove(c);
			
			this.displayBoard();
			
			// 0 = no outcome
			// 1 = player1
			// 2 = player2
			// 3 = tie
			int outcome = this.determineOutcome();
			if(outcome != 0)
			{
				this.displayWinner(outcome);
				break;
			}
			
			if(this.currentPlayer == 1) this.currentPlayer = 2;
			else this.currentPlayer = 1;
		}
	}
	
	public Coordinate askForMove()
	{
		Scanner s = new Scanner(System.in);
		while(true)
		{
			try
			{
				System.out.println("Enter x coordinate:");
				int x = s.nextInt();
				
				System.out.println("Enter y coordinate:");
				int y = s.nextInt();
				
				return new Coordinate(x, y);
			}
			catch(InputMismatchException e)
			{
				s.nextLine();
			}
			
			System.out.println("Invalid! Try again.");
		}
	}
	
	public void playMove(Coordinate c)
	{
		this.grid[c.x][c.y] = this.currentPlayer;
	}
	
	// 0 = no outcome
	// 1 = player1
	// 2 = player2
	// 3 = tie
	public int determineOutcome()
	{
		// horiz
		for(int i = 0; i < 3; i++)
		{
			if(this.grid[i][0] != 0 &&
				this.grid[i][0] == this.grid[i][1] &&
				this.grid[i][0] == this.grid[i][2])
			{
				return this.grid[i][0];
			}
		}
		
		// vert
		for(int i = 0; i < 3; i++)
		{
			if(this.grid[0][i] != 0 &&
				this.grid[0][i] == this.grid[1][i] &&
				this.grid[0][i] == this.grid[2][i])
			{
				return this.grid[0][i];
			}
		}
		
		if(this.grid[0][0] != 0 &&
				this.grid[0][0] == this.grid[1][1] &&
				this.grid[0][0] == this.grid[2][2])
		{
			return this.grid[0][0];
		}
		
		if(this.grid[0][2] != 0 &&
				this.grid[0][2] == this.grid[1][1] &&
				this.grid[0][2] == this.grid[2][0])
		{
			return this.grid[0][2];
		}
		
		if(this.didTie())
		{
			return 3;
		}
		
		return 0;
	}
	
	public boolean didTie()
	{
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				if(this.grid[i][j] == 0)
				{
					return false;
				}
			}
		}
		
		return true;
	}

	public void displayBoard()
	{
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				System.out.print(this.grid[i][j]);
			}
			
			System.out.println("");
		}
	}
	
	public void displayWinner(int outcome)
	{
		if(outcome == 3)
		{
			System.out.println("Tie!");
		}
		else
		{
			System.out.println("Winner Player " + outcome + "!");
		}
	}
}