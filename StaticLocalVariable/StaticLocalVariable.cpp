// StaticLocalVariable.cpp : Defines the entry point for the console application.
//

#include <iostream>

double getAvg(double); //declaration

int main()
{
	double data = 1, average;

	while (data != 0)
	{
		std::cout << "Enter a number: ";
		std::cin >> data;
		average = getAvg(data);
		std::cout << "New average is " << average << std::endl;
	}
	system("pause");
    return 0;
}
//getAvg()
//finds average of old plus new data
double getAvg(double newData)
{
	static double total = 0; // static variables are initialized
	static int count = 0; // add count only once per program
	count++;			// increment count
	total += newData; // add new data to total
	return total / count; // return the new average
}
