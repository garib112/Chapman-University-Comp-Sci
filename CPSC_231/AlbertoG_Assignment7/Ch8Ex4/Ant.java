public class Ant extends Organism
{
    //this is set specifically to this class so that the
    private static final int days_to_breed = 3;


    //constructor
    public Ant(World world, int x, int y)
    {
        super(world, x, y, days_to_breed);
    }

    //when called upon it will return the string "ant"
    public String toString()
    {
        return "o";
    }

    //this is to check if there is an open spot near the ant
    //mainly used by the doodlebug to see if it can it an adjacent ant
    protected boolean checkMove()
    {
        return true;
    }

    //this is used to spawn a new ant adjacent to the ant if conditions are met
    protected void Multiply(int newX, int newY)
    {
        if(world.pointInGrid(newX, newY))
        {
            world.setAt(newX, newY, new Ant(world, newX, newY));
            return;
        }
    }
}
