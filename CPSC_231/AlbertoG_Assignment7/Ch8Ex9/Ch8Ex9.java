import java.util.Random;

public class Ch8Ex9
{
    public static void main(String[] args)
    {
        Random r = new Random();
        printDiceRolls(r);

        LoadedDice d = new LoadedDice();
        printDiceRolls(d);
    }

    public static void printDiceRolls(Random randGenerator)
    {
        for(int i = 0; i < 10; i++)
        {
            System.out.println(randGenerator.nextInt(6) + 1);
        }
    }
}

