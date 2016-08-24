//Exercise 2:
//Using a for loop, iterate through numbers 0 to 100.
//- For multiples of 3 print “Fizz”
//- For multiples of 5 print “Buzz”
//- For multiples of 3 and 5 print “FizzBuzz”
//- Otherwise print the number.
//Note, you will need to use the modulus operator (%)

//Zomawia Sailo
//zomawia@gmail.com

#include <iostream>

int main()
{
	for (int i = 0; i < 100; ++i)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	system("pause");
}
