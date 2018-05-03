import java.util.Random;

public class World
{
    public static final int Grid_Size_Row = 20;
    public static final int Grid_Size_Col = 20;

    //this is the array that all the bugs will be stored in
    private Organism[][] bugs = new Organism[Grid_Size_Row][Grid_Size_Col];

    //returns the bug at the given array coordinates in the World
    public Organism getAt(int x, int y)
    {
        if(!pointInGrid(x,y)) return null;

        return bugs[x][y];
    }

    // sets the bug at the given array coordinates in the world
    public void setAt(int x, int y, Organism bug)
    {
        bugs[x][y] = bug;
    }

    //returns true if the given coordinates are in the grid and false otherwise
    public boolean pointInGrid(int x, int y)
    {
        if( x >= Grid_Size_Row || x < 0 || y >=  Grid_Size_Col || y < 0)
        {
            return false;
        }

        return true;
    }

    public void displayBoard()
    {
       for(int i = 0; i < Grid_Size_Row; i++)
       {
           for (int j = 0; j < Grid_Size_Col; j++)
           {
               if(bugs[i][j] == null)
               {
                   System.out.print("-");
               }
               else
               {
                   System.out.print(bugs[i][j]);
               }

           }

           System.out.println();
       }
    }

    public void initializeBoard()
    {
      Random r = new Random();

      int ant = 0;
      int doodlebug = 0;

      while(ant < 100)
      {
          if(ant < 100)
          {
              int newX = r.nextInt(19)+0;
              int newY = r.nextInt(19)+0;
              Ant newAnt = new Ant(this, newX, newY);

              if(this.pointInGrid(newX,newY) == true && this.getAt(newX, newY) == null)
              {
                  this.setAt(newX,newY, newAnt);
                  ant++;
              }
          }
      }

      while(doodlebug < 5)
      {
          if (doodlebug < 5)
          {
              int newX = r.nextInt(19) + 0;
              int newY = r.nextInt(19) + 0;
              DoodleBug newDoodleBug = new DoodleBug(this, newX, newY);

              if (this.pointInGrid(newX, newY) == true && this.getAt(newX, newY) == null)
              {
                  this.setAt(newX, newY, newDoodleBug);
                  doodlebug++;
              }
          }
      }
    }

    public void simulate(String type)
    {
        for(int row = 0; row< Grid_Size_Row; row++)
        {
            for(int col = 0; col < Grid_Size_Col; col++)
            {
                if(bugs[row][col] != null && bugs[row][col].toString().equals(type))
                {
                    bugs[row][col].simulate();
                }
            }
        }
    }

}
