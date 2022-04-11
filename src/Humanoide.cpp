//
// Created by Estudiante on 10/04/2022.
//

#include "Humanoide.h"


Humanoide::~Humanoide() {

}

string Humanoide::corre() const {
    return "";
}

double Humanoide::getVelocidad() const {
    return velocidad;
}

void Humanoide::setVelocidad(double _velocidad) {
    velocidad = _velocidad;
}

Humanoide::Humanoide(double velocidad) : velocidad(velocidad) {}

Humanoide::Humanoide() {}

ostream &operator<<(ostream &os, const Humanoide &humanoide) {
    os << static_cast<const RoboCop &>(humanoide) << ' ' << static_cast<const Guerrero &>(humanoide) << ", velocidad: "
       << humanoide.velocidad;
    return os;
}

void Humanoide::setColor(const string &color) {
    Guerrero::setColor(color);
}
