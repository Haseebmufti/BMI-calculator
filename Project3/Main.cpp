#include <iostream>
#include <string>

#include "BMI.h"

using namespace std;

int main() {

	string name;
	int height;
	double weight;

	cout << "\t\t BMI Calculator \n";

	cout << "\nPlease enter your name : ";
	cin >> name;
	cout << "\nPlease enter height (in inches) : ";
	cin >> height;
	cout << "\nPlease enter weight (in pounds) : ";
	cin >> weight;

// Creating the objects
	BMI person_1(name, height, weight);

	cout << "\nName : " << person_1.getName() << "\nHeight : " << person_1.getHeight() << "\nWeight : " << person_1.getWeight() /*<< "\nBMI : " << person_1.BMIcalculation() */ << endl;

	cout << "\nPlease enter your name : ";
	cin >> name;
	cout << "\nPlease enter height (in inches) : ";
	cin >> height;
	cout << "\nPlease enter weight (in pounds) : ";
	cin >> weight;

	BMI person_2;

	person_2.setName(name);
	person_2.setHeight(height);
	person_2.setWeight(weight);

	cout << "\nName : " << person_2.getName() << "\nHeight : " << person_2.getHeight() << "\nWeight : " << person_2.getWeight() << "\nBMI : " <<person_2.BMIcalculation() << endl;

	cout << "\nPerson 1 Name : " << person_1.getName() << "\nBMI : " << person_1.BMIcalculation() << endl;
	cout << "\nPerson 2 Name : " << person_2.getName() << "\nBMI : " << person_2.BMIcalculation() << endl;
	
	cout << endl;
	system("pause");
	return 0;
}