import java.util.Scanner;

public class Ch4Ex1
{
	public static void main (String[] args)
	{

	Scanner keyboard = new Scanner(System.in);
	System.out.println("Please enter a number of bottles.");
	int bottles = keyboard.nextInt();

	BeerSong bs = new BeerSong(bottles);

	bs.printEntireSong();

	}
	
	

}