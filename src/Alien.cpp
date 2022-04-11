//
// Created by Estudiante on 10/04/2022.
//
#include "Alien.h"
#include <sstream>

Alien::Alien(double velocidad, double estatura) : Humanoide(velocidad), estatura(estatura) {}

Alien::Alien() {
}


double Alien::getEstatura() const {
    return estatura;
}

void Alien::setEstatura(double _estatura) {
    estatura = _estatura;
}

void Alien::setColor(const string &color) {
    Humanoide::setColor(color);
}


int Alien::setValor(double valor) {
    return valor;
}

string Alien::toString() {
    stringstream s;

    s << (*this);

    return s.str();
}

Alien::~Alien() {

}

ostream &operator<<(ostream &os, const Alien &alien) {
    os << static_cast<const Humanoide &>(alien) << ", estatura: " << alien.estatura;
    return os;
}

string Alien::corre() const {
    return "Como humanoide, me gusta correr a una velocidad de 100.000000 km/s.";
}




