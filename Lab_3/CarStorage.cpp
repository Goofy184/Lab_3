#include "CarStorage.h"

vector<Car> CarStorage::searchBy(string colour, string model)
{
	vector<Car> searchResult=vector<Car>();
	for (auto car : cars) {
		if (car.getColour() == colour && car.getModel() == model) {
			searchResult.push_back(car);
		}
	}
	return searchResult;
}

vector<Car> CarStorage::searchBy(double engineVolume, double power)
{
	vector<Car> searchResult = vector<Car>();
	for (auto car : cars) {
		if (car.getEngineVolume() == engineVolume && car.getPower() == power) {
			searchResult.push_back(car);
		}
	}
	return searchResult;
}

CarStorage::CarStorage()
{
	cars = vector<Car>();
}

void CarStorage::addCar(Car car)
{
	cars.push_back(car);
}

