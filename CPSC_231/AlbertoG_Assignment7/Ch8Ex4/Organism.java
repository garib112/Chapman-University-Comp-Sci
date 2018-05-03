import java.util.Random;

public abstract class Organism
{
  protected World world;
  protected int x;
  protected int y;
  protected boolean simulated;
  protected int daysPast = 0;
  protected int breedTurn;
  protected Random rgen = new Random();


  //this is the constructor
  public Organism(World world, int x, int y, int breedTurn)
  {
      this.world = world;
      this.x = x;
      this.y = y;
      this.breedTurn  = breedTurn;
      simulated = true;
  }

  //this to string is to call upon if the organism is an ant or doodlebug
  public abstract String toString();

  //this will check if there is a need for a move
    // mainly pertains to the doodlebug to see if it can "eat"
  protected abstract boolean checkMove();

  //this checks if there is an available space for the organism to move
    //*******   If the space that is randomly generated isnt null will the bug not move at all?
  public void Move()
  {
      //this will make the organism pick a random direction
      int newX = x + rgen.nextInt(1) -1;
      int newY = y + rgen.nextInt(1) -1;

      //this if statement checks to see if the space is open before it makes the move
      if (world.pointInGrid(newX, newY) && world.getAt(newX, newY) == null)
      {
          world.setAt(newX, newY, this);
          world.setAt(x, y, null);
          x = newX;
          y = newY;
      }

      return;
  }

  //once the Multiply method is called upon, it will check if there is an available space
    //if so then it will pick a spot and spawn an ant there
  protected abstract void Multiply(int newX, int newY);

  protected void Breed()
    {
        if(world.pointInGrid(x+1, y) && world.getAt(x+1, y) == null)
        {
            Multiply(x+1 , y);
            return;
        }
        else if(world.pointInGrid(x+1, y) && world.getAt(x-1, y) == null)
        {
            Multiply(x-1, y);
            return;
        }
        else if (world.pointInGrid(x, y +1) && world.getAt(x, y+1) == null)
        {
            Multiply(x, y +1);
            return;
        }
        else if(world.pointInGrid(x, y-1) && world.getAt(x, y-1) == null)
        {
            Multiply(x , y-1);
            return;
        }
        return;
    }

    //this will set all the moves into motion
    //it will "run" the simulation when called upon
  public void simulate()
  {
      //this will make it so it doesnt do 2 turns in a row
      if(simulated)
      {
          simulated = false;
      }

      simulated = true;

      daysPast++;

      //this checks for breeding
      if(daysPast !=0 && daysPast % breedTurn == 0)
      {
          Breed();
          return;
      }

      if(checkMove())
      {
          Move();
          return;
      }
      return;

  }
  //indicates that the organism hasn't simulated this round
    public void resetSimulation()
    {
        simulated = false;
    }
}