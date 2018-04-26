import org.junit.Test;
import static org.junit.Assert.assertEquals;

import se300.Queue;

import java.util.Queue;

public class TestQueue
{
    Queue<E> queue = new Queue(5);

    public int size = 5;
    public int inserted = 6;

    //test to check addToRear
    @Test
    public void testaddToRear()
    {
        queue.addToRear(inserted);

        assertEquals(inserted, 6);
    }

    //test to check get
    @Test
    public void testGet()
    {
        
        int actual = queue.get(0);
        assertEquals(inserted , actual);
    }

    //test to check getSize
    @Test
    public void testGetSize()
    {
        int actualSize = queue.getSize();
        assertEquals(size, actualSize);
    }

    //Test to check reomveFromFront
    @Test
    public void removeFromFront()
    {
        int actualRemoved = queue.removeFromFront();

        assertEquals(inserted,actualRemoved);
    }


}


