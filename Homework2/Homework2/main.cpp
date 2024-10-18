#include <iostream>

// exercise 7 
/*
int main() {

	int r = 0;
	int x = 0;
	int y = 0;

	std::cin >> r >> x >> y;

	if ((x * x) + (y * y) == (r * r))
	{
		std::cout << "On the circle";
	}
	else if ((x * x) + (y * y) < (r * r))
	{
		std::cout << "In the circle";
	}
	else if ((x * x) + (y * y) > (r * r))
	{
		std::cout << "Out of the circle";
	}
	return 0;
}
*/

// exercise 1
/*
int main() {

	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	bool exists = (a + b) > c && (a + c) > b && (b + c) > a;
	bool isosceles = (a == b && a != c) || (b == c && b != a) || (a == c && a != b);
	bool equilateral = a == b && a == c;
	bool scalene = a != b && a != c && b != c;

	if (exists && isosceles)
	{
		std::cout << "Exists Isosceles";
	}
	else if (exists && equilateral) 
	{
		std::cout << "Exists Equilateral";
	}
	else if (exists && scalene)
	{
		std::cout << "Exists Scalene";
	}
	else 
	{
		std::cout << "Does not exist";
	}
	return 0;
}
*/

//exercise 2
/*
int main() {

	int number = 0;

	std::cin >> number;

	int firstDigit = number % 10;
	number /= 10;

	int secondDigit = number % 10;
	number /= 10;

	int thirdDigit = number;

	bool differentDigits = firstDigit != secondDigit && firstDigit != thirdDigit && secondDigit != thirdDigit;

	if (differentDigits)
	{
		std::cout << "yes" << " " << firstDigit * thirdDigit;
	}
	else 
	{
		std::cout << "no" << firstDigit << secondDigit << thirdDigit;
	}

	return 0;
}
*/

//exercise 3

/*
int main() {

	int firstNumber = 0;
	int secondNumber = 0;
	int thirdNumber = 0;

	std::cin >> firstNumber >> secondNumber >> thirdNumber;

	bool onlyEvenNumbers = firstNumber % 2 == 0 && secondNumber % 2 == 0 && thirdNumber % 2 == 0;
	bool onlyOddNumbers = firstNumber % 2 != 0 && secondNumber % 2 != 0 && thirdNumber % 2 != 0;
	
	int minOddNumber = 0;
	int maxEvenNumber = 0;

	if (firstNumber > secondNumber)
	{
		firstNumber += secondNumber;
		secondNumber = firstNumber - secondNumber;
		firstNumber -= secondNumber;
	}
	if (firstNumber > thirdNumber)
	{
		firstNumber += thirdNumber;
		thirdNumber = firstNumber - thirdNumber;
		firstNumber -= thirdNumber;
	}
	if (secondNumber > thirdNumber)
	{
		secondNumber += thirdNumber;
		thirdNumber = secondNumber - thirdNumber;
		secondNumber -= thirdNumber;
	}


	if (firstNumber % 2 != 0)
	{
		minOddNumber = firstNumber;
	}
	else if (secondNumber % 2 != 0) 
	{
		minOddNumber = secondNumber;
	}
	else if(thirdNumber % 2 != 0)
	{
		minOddNumber = thirdNumber;
	}


	if (thirdNumber % 2 == 0)
	{
		maxEvenNumber = thirdNumber;
	}
	else if (secondNumber % 2 == 0)
	{
		maxEvenNumber = secondNumber;
	}
	else if (firstNumber % 2 == 0)
	{
		maxEvenNumber = firstNumber;
	}

	if (onlyEvenNumbers)
	{
		std::cout << thirdNumber;
	}
	else if (onlyOddNumbers)
	{
		std::cout << firstNumber;
	}
	else
	{
		std::cout << maxEvenNumber - minOddNumber;
	}
	
	return 0;
}
*/

//exercise 4

int main()
{
	int month = 0;
	int year = 0;

	std::cin >> month >> year;

	bool leapYear = year % 4 == 0;

	if (month == 2 && leapYear)
	{
		std::cout << 29;
	}
	else if (month == 2 && !leapYear)
	{
		std::cout << 28;
	}

	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		std::cout << 30;
	}
	else if (month != 2)
	{
		std::cout << 31;
	}

	return 0;
}

