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

ostream& operator<<(ostream& os, const Car& car)
{

    os << "Car engine: " << car.engineVolume << " power: " << car.power;
    os << " model: " << car.model << " colour: " << car.colour << endl;

    return os;
}

istream& operator>>(istream& input, Car& car) {
    string enteredVolume;
    cout << "Enter the Volume: ";
    getline(input, enteredVolume);

    string enteredPower;
    cout << "Enter the Power: ";
    getline(input, enteredPower);

    try {
        car.engineVolume = stod(enteredVolume);
        car.power = stod(enteredPower);
        string enteredColour;
        cout << "Enter the Colour: ";
        getline(input, enteredColour);

        string enteredModel;
        cout << "Enter the Model: ";
        getline(input, enteredModel);

        car.colour = enteredColour;
        car.model = enteredModel;
    }
    catch (exception& e) {
        cout << "Incorrect number, exception: " << e.what();
    }

    
    return input;
}