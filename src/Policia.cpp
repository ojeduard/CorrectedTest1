//
// Created by Estudiante on 10/04/2022.
//

#include "Policia.h"

Policia::Policia(const string &nombre) : nombre(nombre) {}

Policia::Policia() {}

Policia::~Policia() {

}

const string &Policia::getNombre() const {
    return nombre;
}

void Policia::setNombre(const string &_nombre) {
    nombre = _nombre;

}

string Policia::aprende() {
    return "Aprendo como un policia.";
}

string Policia::aplicaJusticia() {
    return "Aplico la justicia como un policia.";
}

string Policia::ayuda() {
    return "Ayudo a la gente como a un policia.";
}

ostream &operator<<(ostream &os, const Policia &policia) {
    os << "[Policia] nombre: " << policia.nombre;
    return os;
}

