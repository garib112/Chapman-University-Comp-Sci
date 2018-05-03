public class BeerSong
{
	public static int bottles;

	BeerSong()
	{
		bottles = 0;
	}

	BeerSong(int numBottles)
	{
		if (numBottles < 0)
		{
			bottles = 0;
		}
		else if (numBottles > 99)
		{
			bottles = 99;
		}
		else 
		{
			bottles = numBottles;
		}
	}

	public void printEntireSong()
	{
		for (int i = bottles ; i >= 0 ; i-- )
		{
			this.printSong(i);
		}
	}

	public void printSong(int numBottles)
	{
		if (numBottles <= 0)
		{
		numBottles = 0;
		System.out.println (numBottles + " bottles of beer on the wall,");
		System.out.println (numBottles + " bottles of beer,");
		System.out.println ("Take one down, pass it around,");
		System.out.println ((numBottles) + " bottles of beer on the wall");
		System.out.println("\n");
		}
		else if (numBottles > 99)
		{
		bottles = 99;
		System.out.println (numBottles + " bottles of beer on the wall,");
		System.out.println (numBottles + " bottles of beer,");
		System.out.println ("Take one down, pass it around,");
		System.out.println ((numBottles - 1) + " bottles of beer on the wall");
		System.out.println("\n");
		}
		else
		{
		System.out.println (numBottles + " bottles of beer on the wall,");
		System.out.println (numBottles + " bottles of beer,");
		System.out.println ("Take one down, pass it around,");
		System.out.println ((numBottles - 1) + " bottles of beer on the wall");
		System.out.println("\n");
		}
	}
}