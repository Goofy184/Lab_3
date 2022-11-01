#pragma once
#include <vector>
#include "Car.h"

using namespace std;

class CarStorage
{
	vector<Car> cars;
public:
	vector<Car> searchBy(string colour, string model);
	vector<Car> searchBy(double engineVolume, double power);
	CarStorage();
	void addCar(Car car);

};


