  What is pointer?

" Pointer is a special variable that hold the address
  of another variable in memory "

	    number
	 _____________
	|	            |
	|     10      |
	|_____________|


	Q: Why we use pointers?

	Efficiently passing large objects
	Dynamic memory allocation
	Enabling polymorphisms

```cpp

	int main()
	{
		int number = 23;
		
		// This is pointer

		int* a = &number;
		*a = 40;

		cout << number;

		return 0;
	}

	```