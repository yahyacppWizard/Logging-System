#include <iostream>

int main()
{
	int number = 67;
	double doub = 5.5;
	float flo = 5.5f;
	char character = 'A';

	std::cout << "Number is " << number << std::endl;
	std::cout << "Double is " << doub << std::endl;
	std::cout << "Float is " << flo << std::endl;
	std::cout << "Character is " << character << std::endl;

	std::cout << "Size of Number is " << sizeof(number) << std::endl;
	std::cout << "Size of Double is " << sizeof(doub) << std::endl;
	std::cout << "Size of Float is " << sizeof(flo) << std::endl;
	std::cout << "Size of Character is " << sizeof(character) << std::endl;
	std::cin.get();
}