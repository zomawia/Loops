//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum
//of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.
//
//Exercise 4 :
//	Complete the above 3 exercises using a “while” loop.
//
//		Zomawia Sailo <zomawia@gmail.com>

#include <iostream>

int main()
{
	int total = 0;
	int i=0;

	while (i < 1000)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			total += i;
		}
		i++;
	}

	printf("%d\n\n", total);

	system("pause");
}
