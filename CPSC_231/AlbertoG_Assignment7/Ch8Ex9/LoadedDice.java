import java.util.Random;

public class LoadedDice extends Random
{
    LoadedDice()
    {
        super(6);
    }

    public int nextInt(int num)
    {
        Random r = new Random();

        int chance = r.nextInt(2)+ 1;

        if(chance == 1)
        {
            return num-1;
        }
        else
        {
            return r.nextInt(num);
        }
    }

}
