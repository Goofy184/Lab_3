#include <iostream>
#include <exception>
#include "Car.h"
using namespace std;



int main()
{

    Car car(1.0, "red", 100, "Skoda"), car2;

    cin >> car2;

    cout << car2;

    cout << car << endl;

    car += 50;

    cout << car << endl;

    return 0;
}