//this is a practice file to help understand the file input and output


int main()
{
	string STRING;
	int nucle_count = 0;
	ifstream infile;
	infile.open("DNA.txt");

	if(!infile)	// this is to check if the file can be read or not
	{
		cerr << "Unable to open file DNA.txt";
		exit(1); //call system to stop
	}

	// this reads the text file and then counts how long each line is
	for(int i = 0; i < 7; i++)
	{
		getline(infile, STRING); // Saves the line in STRING
		// cout << STRING; Prints out String
		for (int i = 0; i < STRING.length(); ++i)
		{
			++nucle_count;
		}

		cout << nucle_count << endl << endl;

		nucle_count = 0;	// resets counter
	}


	infile.close();
	return 0;
	
}
