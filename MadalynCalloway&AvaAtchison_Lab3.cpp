#include <iostream>
using namespace std;

//Function 1: cms to inches
double convert_cm(double num_cm)
{
	return num_cm / 2.54;
}

// Function 2: kgs to lbs
double convert_kg(double num_kg)
{
	return num_kg * 2.20462262;
}

//Function 3: celcius to fahrenheit
double convert_c(double num_c)
{
	return (num_c * 9 / 5) + 32;
}

int main()
{

	double number;
	int selection;

	cout << "1. Centimeter to Inches" << endl;
	cout << "3. Kilagrams to Pounds" << endl;
	cout << "5. Celcius to Fahrenheit" << endl;
	cout << "Select conversion (1, 2, 3): ";
	cin >> selection;

	cout << "Enter number: ";
	cin >> number;

	switch (selection)
	{
	case 1:
	{
		double inches = convert_cm(number);

		cout << "Inches: " << inches << endl;

		break;
	}
	case 2:
	{
		double pounds = convert_kg(number);

		cout << "Pounds: " << pounds << endl;

		break;
	}
	case 3:
	{
		double fahrenheit = convert_c(number);

		cout << "Fahrenheit: " << fahrenheit << endl;

		break;
	}
	}


	return 0;

}