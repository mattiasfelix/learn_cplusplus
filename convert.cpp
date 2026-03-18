#include <iostream>

using namespace std;

// Declare functions
float askUserForTemperature();
void convertFahrenheitToCelcius(float fahrenheit);


int main()
{
	/* 
		Write a program to convert fahrenheit to celcius 
	*/

	// Call the function
	convertFahrenheitToCelcius(askUserForTemperature());

	return 0;
}


float askUserForTemperature()
{
	// Ask the user for the temperature in fahrenheit
	cout << "What is the temperature in Fahrenheit? ";

	float fahrenheit = 0;

	cin >> fahrenheit;

	return fahrenheit;

}


void convertFahrenheitToCelcius(float fahrenheit)
{

	float convertTemperature = (fahrenheit - 32) / 1.8;


	cout << fahrenheit << " degree Fahrenheit  is " << convertTemperature << " degree Celcius\n";

}
