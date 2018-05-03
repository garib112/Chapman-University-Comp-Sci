using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace AGaribay_proj3
{
    class Program
    {
        static void Main(string[] args)
        {
            //this initilizes the array
            Book[] myArray = new Book[10] { null, null, null, null, null, null, null,null, null, null };

            //this boolean simply checks continuly run the program until the user is done
            bool menuChecker = true;

            //this is the begin instructions
            Console.WriteLine("Hello and welcome to your book list");
            Console.WriteLine("Here you will be able to insert the names of the top ten books you need to read.");
            Console.WriteLine();

            while (true)
            {
                Console.WriteLine("Before we start do you have a file you would like the program to read from?");
                Console.WriteLine("Type 'yes' or 'no'");
                string fileOption = Console.ReadLine();

                //this while loop contains the entire program and will break once the user is finished
                if (fileOption == "yes" || fileOption == "Yes" || fileOption == "yEs" || fileOption == "yeS")
                {
                    Console.WriteLine("Please enter the name of the file");
                    string fileName = Console.ReadLine();
                    // If the file doesn't exist, create it
                    if (!File.Exists(@fileName))
                    {
                        Console.WriteLine("It appears that the file you entered does not exist");
                        Console.WriteLine("A file with the name that was given has been created");
                        Console.WriteLine("The program will now restart. Please enter your info into the new file");
                        Console.ReadLine();
                        File.Create(@fileName);
                        return; // Since no file existed, nothing in the file to read, exit the method
                    }

                    using (StreamReader reader = new StreamReader(@fileName))
                    {
                        while (!reader.EndOfStream)
                        {
                            string line = reader.ReadLine();

                            // If the line isn't blank, do something with it
                            if (line != null)
                            {
                                
                                string name = " ";
                                string yearStr = " ";
                                int year;
                                string author = " ";

                                foreach (char character in line)
                                {
                                    int slashCounter = 0;
                                    if (character == '/')
                                    {
                                        ++slashCounter;
                                        if (slashCounter == 0)
                                        {
                                            name = name.Insert(name.Length, character.ToString());
                                        }
                                        else if(slashCounter == 1)
                                        {
                                            yearStr = yearStr + character.ToString();
                                        }
                                        else if(slashCounter == 2)
                                        {
                                            author = author + character.ToString();
                                        }
                                    }
                                }

                                int.TryParse(yearStr, out year);

                                Book libro = new Book(name, year, author);

                                for (int i = 0; i < 10; i++)
                                {
                                    if (myArray[i] == null)
                                    {
                                        myArray[i] = libro;

                                        break;
                                    }
                                }
                            }
                        }
                    }

                    break;
                }
                else if (fileOption == "no" || fileOption == "No" || fileOption == "NO" || fileOption == "nO")
                {
                    Console.WriteLine();
                    break;
                }
                else
                {
                    Console.WriteLine("What you entered was an invalid input");
                    Console.WriteLine();
                }
            }

            Console.WriteLine("Here is the menu: ");
            Console.WriteLine();

                while (menuChecker == true)
                {
                    Console.WriteLine("Enter the number of the action you would like to complete");
                    Console.WriteLine("1. Add a new book");
                    Console.WriteLine("2. View info on a book");
                    Console.WriteLine("3. Delete a book ");
                    Console.WriteLine("4. Exit the Program and output your list to a file");
                    Console.WriteLine();

                    string option = Console.ReadLine();
                    Console.WriteLine();

                    //option 1 contains adding a new book to the list
                    if (option == "1")
                    {
                        int integerYearPublished = 0;

                        Console.WriteLine("Please enter the name of the book: ");
                        string bookName = Console.ReadLine();
                        Console.WriteLine();

                        Console.WriteLine("Please enter the year published: ");
                        string publishedYear = Console.ReadLine();
                        Console.WriteLine();

                        if (int.TryParse(publishedYear, out integerYearPublished))
                        {
                       
                        }
                        else
                        {
                            Console.WriteLine("You response contained something that wasn't a number. Please try again.");
                            Console.WriteLine();
                            continue;
                        }

                        Console.WriteLine("Please enter the name of the author: ");
                        string authorName = Console.ReadLine();
                        Console.WriteLine();

                        Book libro = new Book(bookName, integerYearPublished, authorName);

                        for (int i = 0; i < 10; i++)
                        {
                            if (myArray[i] == null)
                            {
                                myArray[i] = libro;

                                break;
                            }
                        }

                    }
                    //option 2 allows the user to view the list
                    else if(option == "2")
                    {

                        Console.WriteLine("Which book do you wish to see the info of ?:");
                        Console.WriteLine("Enter the number of the book to see its info: ");

                        for (int i = 0; i < 10; i++)
                        {
                            if (myArray[i] != null)
                            {
                                int num = i + 1;
                                Console.WriteLine(num + "." + " " + myArray[i].getBookName()); 
                            }
                            else if(myArray[i] == null)
                            {
                                int num = i + 1;
                                Console.WriteLine(num + "." + " Empty Slot");
                            }
                        }

                        Console.WriteLine("Type 'Enter' to go back");

                        string bookNum = Console.ReadLine();
                        Console.WriteLine();

                        if (bookNum == "enter" || bookNum == "Enter")
                        {
                            continue;
                        }
                        else
                        {

                            int numberofBook = 0;

                            int.TryParse(bookNum, out numberofBook);

                            if (numberofBook > 10 || numberofBook < 1)
                            {
                                Console.WriteLine("Please enter a valid option");
                                Console.WriteLine();
                            
                            }
                            else
                            {
                                --numberofBook;

                                if (myArray[numberofBook] == null)
                                {
                                    Console.WriteLine("Sorry there is no book in that slot");
                                    Console.WriteLine();
                                }
                                else
                                {
                                    myArray[numberofBook].printInfo();
                                    Console.WriteLine("Press enter to go back");
                                    Console.ReadLine();
                                
                                }
                            }
                        }
                    }
                    //option 3 deletes a book from the list
                    else if(option == "3")
                    {
                        for (int i = 0; i < 10; i++)
                        {
                            if (myArray[i] != null)
                            {
                                int num = i + 1;
                                Console.WriteLine(num + "." + " " + myArray[i].getBookName());
                            }
                            else if (myArray[i] == null)
                            {
                                int num = i + 1;
                                Console.WriteLine(num + "." + " Empty Slot");
                            }
                        }

                        Console.WriteLine("Type 'Enter' to go back");

                        string bookNum = Console.ReadLine();
                        Console.WriteLine();

                        if (bookNum == "enter" || bookNum == "Enter")
                        {
                            continue;
                        }
                        else
                        {

                            int numberofBook = 0;

                            int.TryParse(bookNum, out numberofBook);

                            if (numberofBook > 10 || numberofBook < 1)
                            {
                                Console.WriteLine("Please enter a valid option");
                                Console.WriteLine();

                            }
                            else
                            {
                                --numberofBook;

                                myArray[numberofBook] = null;
                                Console.WriteLine("The book has been deleted from your list");
                                Console.WriteLine();
                            }
                        
                        }
                    }
                    //this option terminates the program and should technically output the list to a file
                    else if(option == "4")
                    {

                        using (StreamWriter writer = new StreamWriter(@"file.txt"))
                        {
                            for (int i = 0; i < 10; i++)
                            {
                                if (myArray[i] != null)
                                {
                                    writer.WriteLine(myArray[i].showInfo());
                                }
                                else if (myArray[i] == null)
                                {
                                    int num = i + 1;
                                    writer.WriteLine(num + ". Empty Slot");
                                }
                            }
                        }

                        Console.WriteLine("GOODBYE!!! Press Enter to exit the program");
                        Console.ReadLine();

                        break;
                    }
                    else
                    {
                        Console.WriteLine("Please enter a valid response");
                        Console.WriteLine();
                    }

                }
        }
        
    }


    public class Book
    {
        private string name;
        private int year;
        private string author;

        public Book(string bookName, int yearPublished, string authorName)
        {
            name = bookName;
            year = yearPublished;
            author = authorName;
        }


        public void printInfo()
        {
            Console.WriteLine("The title is: " + name);
            Console.WriteLine("The year published is: " + year);
            Console.WriteLine("The name of the author is: " + author);
            Console.ReadLine();
        }

        public string showInfo()
        {
            string info;

            info = name + "/" + year + "/" + author;

            return info;
        }

        public void printBookName()
        {
            Console.WriteLine(name);
        }

        public string getBookName()
        {
            return name;
        }

        

        /*
        public void ReadFile()
        {
            
        }
        */
    }
}
