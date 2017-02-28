// Header ==> Function Declarations 

#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI {
public:
	//Default Constructor
	BMI();

	//Overload Constructor
	BMI(string, int, double);

	//Destructor
	~BMI();

	//Accessor Functions
	string getName() const;
		// getName -> returns name of the person

	int getHeight() const;
		// getHeight -> returns height of the person

	double getWeight() const;
		// getWeight -> returns weight of the person

	//Mutator Functions
	void setName(string);
		// setName -> sets name of person
		// @param string -> name of person

	void setHeight(int);
	   // setHeight -> sets height of person
	   // @param int -> height of person

	void setWeight(double);
	   // setWeight -> sets weight of person
	   // @param double -> weight of person

	double BMIcalculation() const;
	   // BMIcalculation -> calculates BMI of person
	   // @return double -> BMI of person

private:
	//Member variables
	string newName;
	int newHeight;
	double newWeight;

};
#endif BMI_H

