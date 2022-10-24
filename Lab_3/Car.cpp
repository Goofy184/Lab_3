#include "Car.h"

double Car::getEngineVolume() {
    return engineVolume;
}
string Car::getColour() {
    return colour;
}
double Car::getPower() {
    return power;
}
string Car::getModel() {
    return model;
}
Car::Car() {

}
Car::Car(double engineVolumeValue, string colourValue, double powerValue, string modelValue) {
    engineVolume = engineVolumeValue;
    colour = colourValue;
    power = powerValue;
    model = modelValue;
}

Car Car::operator+= (double additionalPower) {
    power += additionalPower;
    return *this;
}



Car::~Car()
{
    cout << "\n Destructor of car" << endl;
}

ostream& operator<<(ostream& os, const Car& car)
{

    try {
        os << "Car engine: " << car.engineVolume << " power: " << car.power;
    }
    catch (exception& e) {
        cout << "Incorrect number, exception: " << e.what();
    }

    os << " model: " << car.model << " colour: " << car.colour << endl;

    return os;
}

istream& operator>>(istream& input, Car& car) {
    try {
        input >> car.engineVolume;
        input >> car.power;
    }
    catch (exception& e) {
        cout << "Incorrect number, exception: " << e.what();
    }

    input >> car.model >> car.colour;
    return input;
}