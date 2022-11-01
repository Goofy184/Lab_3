#include <iostream>
#include <exception>
#include "CarStorage.h"
using namespace std;



int main()
{

    Car car1(1.0, "red", 100, "Skoda"), car2;

    CarStorage carStorage = CarStorage();
    carStorage.addCar(car1);

    cin >> car2;
    carStorage.addCar(car2);

    cout <<"Car2: " << car2;

    cout <<"Car1: "<< car1 << endl;

    car1 += 50;

    cout << "Car1: " << car1 << endl;
    cout << "searchBy(\"red\", \"Skoda\")"<<endl;
    for (auto car : carStorage.searchBy("red", "Skoda")) {
        cout << car << endl;
    }
    cout << "searchBy(1.0,100)" << endl;
    for (auto car : carStorage.searchBy(1.0,100)) {
        cout << car << endl;
    }


    return 0;
}