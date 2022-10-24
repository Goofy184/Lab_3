#pragma once
#include <iostream>
#include <exception>

using namespace std;

class Car {
private:
    double engineVolume;
    string colour;
    double power;
    string model;

public:
    double getEngineVolume();
    string getColour() ;
    double getPower();
    string getModel();
    Car();
    Car(double engineVolumeValue, string colourValue, double powerValue, string modelValue);
    Car operator+= (double additionalPower);

    friend ostream& operator<<(ostream& os, const Car& car);

    friend istream& operator>>(istream& input, Car& car);


    ~Car();
};

