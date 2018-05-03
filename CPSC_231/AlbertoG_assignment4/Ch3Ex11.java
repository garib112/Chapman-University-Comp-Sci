
public class Ch3Ex11
{
	public static void main (String[] args)
	{
		int winner1 = 0;
		int winner2 = 0;
		int winner3 = 0;

		for (int i = 0; i < 3 ; i++ )
		{
			int winners = (int)(Math.random()*30+1);
			if (i == 0)
			{
				winner1 = winners;
			}
			else if (i == 1)
			{
				if (winner1 != winners)
					winner2 = winners;
				else 
					continue;
			}
			else 
				{

					if (winner1 != winners && winner2 != winners)
						winner3 = winners;
					else
						continue;
				}
		}
		System.out.println("The winners are " + winner1 + " , " + winner2 + " , " +  winner3);
	}
}