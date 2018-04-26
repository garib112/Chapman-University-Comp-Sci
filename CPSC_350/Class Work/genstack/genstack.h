class genstack
{
	public:
		genstack(int maxsize);
		~genstack();

		void push(char data);
		char pop();
		char peek();
		int isFull();
		int isEmpty();

		int top;
		int max;

		char *myArray;
};