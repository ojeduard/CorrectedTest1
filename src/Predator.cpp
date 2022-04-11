//
// Created by Estudiante on 10/04/2022.
//

#include "Predator.h"
#include <sstream>

Predator::Predator(double peso) : peso(peso) {}

Predator::Predator() {
}

Predator::~Predator() {

}

double Predator::getPeso() const {
    return peso;
}

void Predator::setPeso(double _peso) {
    peso = _peso;
}

void Predator::setColor(const string &color) {
    Humanoide::setColor(color);
}


int Predator::setValor(double valor) {
    return valor;
}

string Predator::toString() {
    return "[--------------------------------------Soy Predator---------------------------]";
}

void Predator::setVelocidad(int _vel) {
    Humanoide::setVelocidad(_vel);
}

string Predator::corre() const {
    return "Como humanoide, me gusta correr a una velocidad de 234.000000 km/s.";
}

ostream &operator<<(ostream &os, const Predator &predator) {
    os << static_cast<const Humanoide &>(predator) << ", peso: " << predator.peso;
    return os;
}


