public class DoodleBug extends Organism
{
    private int starveTimer = 0;

    private static final int days_to_breed = 8;

    //constructor
    public DoodleBug(World world, int x, int y)
    {
        super(world, x, y, days_to_breed);
    }

    //returns "doodlebug" when called upon
    public String toString()
    {
        return "X";
    }

    //checks for available space adjacent to the doodlebug or if an ant can be eaten
    protected boolean checkMove()
    {
        if(eatAnt(x+1, y ))
        {
            return false;
        }
        else if (eatAnt(x-1, y ))
        {
            return false;
        }
        else if (eatAnt(x, y+1 ))
        {
            return false;
        }
        else if (eatAnt(x, y-1 ))
        {
            return false;
        }

        starveTimer++;
        if(starveTimer == 3)
        {
            Starve();
            return false;
        }

        return true;

    }

    // checks to see if an ant can be eaten and if so it does just that
    private boolean eatAnt(int maybeX, int maybeY)
    {
        Organism maybeOrg = world.getAt(maybeX, maybeY);

        if(world.pointInGrid(maybeX, maybeY) && maybeOrg != null && maybeOrg.toString() == "o")
        {
          starveTimer = 0;
          world.setAt(x, y,null);
          world.setAt(maybeX, maybeY, this);
          this.x = maybeX;
          this.y = maybeY;
          return true;
        }
        return false;

    }

    //this will spawn a new doodlebug into an adjacent space
    protected void Multiply(int newX, int newY)
    {
        if (world.pointInGrid(newX, newY))
        {
            world.setAt(newX, newY, new DoodleBug(world, newX, newY));
            return;
        }
    }

    //this will force the doodlebug to "starve" making its spot null
    public void Starve()
    {
        world.setAt(x, y, null);
    }
}
