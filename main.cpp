//challenge: create a sqrt copy function without using the (*) operator
//limitations of p_square(): only takes int; can't compute non-perfect squares

#include <iostream>

int p_square(int x)
//perfect squares only
{
	int sqrt = 0;
	int odd_numbers = 1;
	int sum = 0;
	for (int i = 0; sum < x; i++)
	{
		sum = sum + odd_numbers;
		odd_numbers += 2;
		sqrt++;
	}
	return sqrt;
}

int main()
{
	std::cout << "Perfect square function" << std::endl;
	std::cout << "Input: ";

	int input = 0;
	std::cin >> input;

	std::cout << p_square(input) << std::endl;

	return 0;
}